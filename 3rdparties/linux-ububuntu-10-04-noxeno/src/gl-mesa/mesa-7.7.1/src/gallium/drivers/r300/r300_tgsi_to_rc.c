/*
 * Copyright 2009 Nicolai Hähnle <nhaehnle@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * on the rights to use, copy, modify, merge, publish, distribute, sub
 * license, and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) AND/OR THEIR SUPPLIERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE. */

#include "r300_tgsi_to_rc.h"

#include "radeon_compiler.h"
#include "radeon_program.h"

#include "tgsi/tgsi_parse.h"
#include "tgsi/tgsi_scan.h"
#include "tgsi/tgsi_util.h"


static unsigned translate_opcode(unsigned opcode)
{
    switch(opcode) {
        case TGSI_OPCODE_ARL: return RC_OPCODE_ARL;
        case TGSI_OPCODE_MOV: return RC_OPCODE_MOV;
        case TGSI_OPCODE_LIT: return RC_OPCODE_LIT;
        case TGSI_OPCODE_RCP: return RC_OPCODE_RCP;
        case TGSI_OPCODE_RSQ: return RC_OPCODE_RSQ;
        case TGSI_OPCODE_EXP: return RC_OPCODE_EXP;
        case TGSI_OPCODE_LOG: return RC_OPCODE_LOG;
        case TGSI_OPCODE_MUL: return RC_OPCODE_MUL;
        case TGSI_OPCODE_ADD: return RC_OPCODE_ADD;
        case TGSI_OPCODE_DP3: return RC_OPCODE_DP3;
        case TGSI_OPCODE_DP4: return RC_OPCODE_DP4;
        case TGSI_OPCODE_DST: return RC_OPCODE_DST;
        case TGSI_OPCODE_MIN: return RC_OPCODE_MIN;
        case TGSI_OPCODE_MAX: return RC_OPCODE_MAX;
        case TGSI_OPCODE_SLT: return RC_OPCODE_SLT;
        case TGSI_OPCODE_SGE: return RC_OPCODE_SGE;
        case TGSI_OPCODE_MAD: return RC_OPCODE_MAD;
        case TGSI_OPCODE_SUB: return RC_OPCODE_SUB;
        case TGSI_OPCODE_LRP: return RC_OPCODE_LRP;
     /* case TGSI_OPCODE_CND: return RC_OPCODE_CND; */
     /* case TGSI_OPCODE_CND0: return RC_OPCODE_CND0; */
     /* case TGSI_OPCODE_DP2A: return RC_OPCODE_DP2A; */
                                        /* gap */
        case TGSI_OPCODE_FRC: return RC_OPCODE_FRC;
     /* case TGSI_OPCODE_CLAMP: return RC_OPCODE_CLAMP; */
        case TGSI_OPCODE_FLR: return RC_OPCODE_FLR;
     /* case TGSI_OPCODE_ROUND: return RC_OPCODE_ROUND; */
        case TGSI_OPCODE_EX2: return RC_OPCODE_EX2;
        case TGSI_OPCODE_LG2: return RC_OPCODE_LG2;
        case TGSI_OPCODE_POW: return RC_OPCODE_POW;
        case TGSI_OPCODE_XPD: return RC_OPCODE_XPD;
                                        /* gap */
        case TGSI_OPCODE_ABS: return RC_OPCODE_ABS;
     /* case TGSI_OPCODE_RCC: return RC_OPCODE_RCC; */
        case TGSI_OPCODE_DPH: return RC_OPCODE_DPH;
        case TGSI_OPCODE_COS: return RC_OPCODE_COS;
        case TGSI_OPCODE_DDX: return RC_OPCODE_DDX;
        case TGSI_OPCODE_DDY: return RC_OPCODE_DDY;
     /* case TGSI_OPCODE_KILP: return RC_OPCODE_KILP; */
     /* case TGSI_OPCODE_PK2H: return RC_OPCODE_PK2H; */
     /* case TGSI_OPCODE_PK2US: return RC_OPCODE_PK2US; */
     /* case TGSI_OPCODE_PK4B: return RC_OPCODE_PK4B; */
     /* case TGSI_OPCODE_PK4UB: return RC_OPCODE_PK4UB; */
     /* case TGSI_OPCODE_RFL: return RC_OPCODE_RFL; */
        case TGSI_OPCODE_SEQ: return RC_OPCODE_SEQ;
        case TGSI_OPCODE_SFL: return RC_OPCODE_SFL;
        case TGSI_OPCODE_SGT: return RC_OPCODE_SGT;
        case TGSI_OPCODE_SIN: return RC_OPCODE_SIN;
        case TGSI_OPCODE_SLE: return RC_OPCODE_SLE;
        case TGSI_OPCODE_SNE: return RC_OPCODE_SNE;
     /* case TGSI_OPCODE_STR: return RC_OPCODE_STR; */
        case TGSI_OPCODE_TEX: return RC_OPCODE_TEX;
        case TGSI_OPCODE_TXD: return RC_OPCODE_TXD;
        case TGSI_OPCODE_TXP: return RC_OPCODE_TXP;
     /* case TGSI_OPCODE_UP2H: return RC_OPCODE_UP2H; */
     /* case TGSI_OPCODE_UP2US: return RC_OPCODE_UP2US; */
     /* case TGSI_OPCODE_UP4B: return RC_OPCODE_UP4B; */
     /* case TGSI_OPCODE_UP4UB: return RC_OPCODE_UP4UB; */
     /* case TGSI_OPCODE_X2D: return RC_OPCODE_X2D; */
     /* case TGSI_OPCODE_ARA: return RC_OPCODE_ARA; */
     /* case TGSI_OPCODE_ARR: return RC_OPCODE_ARR; */
     /* case TGSI_OPCODE_BRA: return RC_OPCODE_BRA; */
     /* case TGSI_OPCODE_CAL: return RC_OPCODE_CAL; */
     /* case TGSI_OPCODE_RET: return RC_OPCODE_RET; */
     /* case TGSI_OPCODE_SSG: return RC_OPCODE_SSG; */
        case TGSI_OPCODE_CMP: return RC_OPCODE_CMP;
        case TGSI_OPCODE_SCS: return RC_OPCODE_SCS;
        case TGSI_OPCODE_TXB: return RC_OPCODE_TXB;
     /* case TGSI_OPCODE_NRM: return RC_OPCODE_NRM; */
     /* case TGSI_OPCODE_DIV: return RC_OPCODE_DIV; */
     /* case TGSI_OPCODE_DP2: return RC_OPCODE_DP2; */
        case TGSI_OPCODE_TXL: return RC_OPCODE_TXL;
     /* case TGSI_OPCODE_BRK: return RC_OPCODE_BRK; */
        case TGSI_OPCODE_IF: return RC_OPCODE_IF;
     /* case TGSI_OPCODE_LOOP: return RC_OPCODE_LOOP; */
     /* case TGSI_OPCODE_REP: return RC_OPCODE_REP; */
        case TGSI_OPCODE_ELSE: return RC_OPCODE_ELSE;
        case TGSI_OPCODE_ENDIF: return RC_OPCODE_ENDIF;
     /* case TGSI_OPCODE_ENDLOOP: return RC_OPCODE_ENDLOOP; */
     /* case TGSI_OPCODE_ENDREP: return RC_OPCODE_ENDREP; */
     /* case TGSI_OPCODE_PUSHA: return RC_OPCODE_PUSHA; */
     /* case TGSI_OPCODE_POPA: return RC_OPCODE_POPA; */
     /* case TGSI_OPCODE_CEIL: return RC_OPCODE_CEIL; */
     /* case TGSI_OPCODE_I2F: return RC_OPCODE_I2F; */
     /* case TGSI_OPCODE_NOT: return RC_OPCODE_NOT; */
     /* case TGSI_OPCODE_TRUNC: return RC_OPCODE_TRUNC; */
     /* case TGSI_OPCODE_SHL: return RC_OPCODE_SHL; */
     /* case TGSI_OPCODE_SHR: return RC_OPCODE_SHR; */
     /* case TGSI_OPCODE_AND: return RC_OPCODE_AND; */
     /* case TGSI_OPCODE_OR: return RC_OPCODE_OR; */
     /* case TGSI_OPCODE_MOD: return RC_OPCODE_MOD; */
     /* case TGSI_OPCODE_XOR: return RC_OPCODE_XOR; */
     /* case TGSI_OPCODE_SAD: return RC_OPCODE_SAD; */
     /* case TGSI_OPCODE_TXF: return RC_OPCODE_TXF; */
     /* case TGSI_OPCODE_TXQ: return RC_OPCODE_TXQ; */
     /* case TGSI_OPCODE_CONT: return RC_OPCODE_CONT; */
     /* case TGSI_OPCODE_EMIT: return RC_OPCODE_EMIT; */
     /* case TGSI_OPCODE_ENDPRIM: return RC_OPCODE_ENDPRIM; */
     /* case TGSI_OPCODE_BGNLOOP2: return RC_OPCODE_BGNLOOP2; */
     /* case TGSI_OPCODE_BGNSUB: return RC_OPCODE_BGNSUB; */
     /* case TGSI_OPCODE_ENDLOOP2: return RC_OPCODE_ENDLOOP2; */
     /* case TGSI_OPCODE_ENDSUB: return RC_OPCODE_ENDSUB; */
        case TGSI_OPCODE_NOP: return RC_OPCODE_NOP;
                                        /* gap */
     /* case TGSI_OPCODE_NRM4: return RC_OPCODE_NRM4; */
     /* case TGSI_OPCODE_CALLNZ: return RC_OPCODE_CALLNZ; */
     /* case TGSI_OPCODE_IFC: return RC_OPCODE_IFC; */
     /* case TGSI_OPCODE_BREAKC: return RC_OPCODE_BREAKC; */
        case TGSI_OPCODE_KIL: return RC_OPCODE_KIL;
    }

    fprintf(stderr, "Unknown opcode: %i\n", opcode);
    return RC_OPCODE_ILLEGAL_OPCODE;
}

static unsigned translate_saturate(unsigned saturate)
{
    switch(saturate) {
        default:
            fprintf(stderr, "Unknown saturate mode: %i\n", saturate);
            /* fall-through */
        case TGSI_SAT_NONE: return RC_SATURATE_NONE;
        case TGSI_SAT_ZERO_ONE: return RC_SATURATE_ZERO_ONE;
    }
}

static unsigned translate_register_file(unsigned file)
{
    switch(file) {
        case TGSI_FILE_CONSTANT: return RC_FILE_CONSTANT;
        case TGSI_FILE_IMMEDIATE: return RC_FILE_CONSTANT;
        case TGSI_FILE_INPUT: return RC_FILE_INPUT;
        case TGSI_FILE_OUTPUT: return RC_FILE_OUTPUT;
        default:
            fprintf(stderr, "Unhandled register file: %i\n", file);
            /* fall-through */
        case TGSI_FILE_TEMPORARY: return RC_FILE_TEMPORARY;
        case TGSI_FILE_ADDRESS: return RC_FILE_ADDRESS;
    }
}

static int translate_register_index(
    struct tgsi_to_rc * ttr,
    unsigned file,
    int index)
{
    if (file == TGSI_FILE_IMMEDIATE)
        return ttr->immediate_offset + index;

    return index;
}

static void transform_dstreg(
    struct tgsi_to_rc * ttr,
    struct rc_dst_register * dst,
    struct tgsi_full_dst_register * src)
{
    dst->File = translate_register_file(src->DstRegister.File);
    dst->Index = translate_register_index(ttr, src->DstRegister.File, src->DstRegister.Index);
    dst->WriteMask = src->DstRegister.WriteMask;
    dst->RelAddr = src->DstRegister.Indirect;
}

static void transform_srcreg(
    struct tgsi_to_rc * ttr,
    struct rc_src_register * dst,
    struct tgsi_full_src_register * src)
{
    dst->File = translate_register_file(src->SrcRegister.File);
    dst->Index = translate_register_index(ttr, src->SrcRegister.File, src->SrcRegister.Index);
    dst->RelAddr = src->SrcRegister.Indirect;
    dst->Swizzle = tgsi_util_get_full_src_register_swizzle(src, 0);
    dst->Swizzle |= tgsi_util_get_full_src_register_swizzle(src, 1) << 3;
    dst->Swizzle |= tgsi_util_get_full_src_register_swizzle(src, 2) << 6;
    dst->Swizzle |= tgsi_util_get_full_src_register_swizzle(src, 3) << 9;
    dst->Abs = src->SrcRegisterExtMod.Absolute;
    dst->Negate = src->SrcRegister.Negate ? RC_MASK_XYZW : 0;
}

static void transform_texture(struct rc_instruction * dst, struct tgsi_instruction_ext_texture src)
{
    switch(src.Texture) {
        case TGSI_TEXTURE_1D:
            dst->U.I.TexSrcTarget = RC_TEXTURE_1D;
            break;
        case TGSI_TEXTURE_2D:
            dst->U.I.TexSrcTarget = RC_TEXTURE_2D;
            break;
        case TGSI_TEXTURE_3D:
            dst->U.I.TexSrcTarget = RC_TEXTURE_3D;
            break;
        case TGSI_TEXTURE_CUBE:
            dst->U.I.TexSrcTarget = RC_TEXTURE_CUBE;
            break;
        case TGSI_TEXTURE_RECT:
            dst->U.I.TexSrcTarget = RC_TEXTURE_RECT;
            break;
        case TGSI_TEXTURE_SHADOW1D:
            dst->U.I.TexSrcTarget = RC_TEXTURE_1D;
            dst->U.I.TexShadow = 1;
            break;
        case TGSI_TEXTURE_SHADOW2D:
            dst->U.I.TexSrcTarget = RC_TEXTURE_2D;
            dst->U.I.TexShadow = 1;
            break;
        case TGSI_TEXTURE_SHADOWRECT:
            dst->U.I.TexSrcTarget = RC_TEXTURE_RECT;
            dst->U.I.TexShadow = 1;
            break;
    }
}

static void transform_instruction(struct tgsi_to_rc * ttr, struct tgsi_full_instruction * src)
{
    struct rc_instruction * dst;
    int i;

    if (src->Instruction.Opcode == TGSI_OPCODE_END)
        return;

    dst = rc_insert_new_instruction(ttr->compiler, ttr->compiler->Program.Instructions.Prev);
    dst->U.I.Opcode = translate_opcode(src->Instruction.Opcode);
    dst->U.I.SaturateMode = translate_saturate(src->Instruction.Saturate);

    if (src->Instruction.NumDstRegs)
        transform_dstreg(ttr, &dst->U.I.DstReg, &src->FullDstRegisters[0]);

    for(i = 0; i < src->Instruction.NumSrcRegs; ++i) {
        if (src->FullSrcRegisters[i].SrcRegister.File == TGSI_FILE_SAMPLER)
            dst->U.I.TexSrcUnit = src->FullSrcRegisters[i].SrcRegister.Index;
        else
            transform_srcreg(ttr, &dst->U.I.SrcReg[i], &src->FullSrcRegisters[i]);
    }

    /* Texturing. */
    transform_texture(dst, src->InstructionExtTexture);
}

static void handle_immediate(struct tgsi_to_rc * ttr, struct tgsi_full_immediate * imm)
{
    struct rc_constant constant;
    int i;

    constant.Type = RC_CONSTANT_IMMEDIATE;
    constant.Size = 4;
    for(i = 0; i < 4; ++i)
        constant.u.Immediate[i] = imm->u[i].Float;
    rc_constants_add(&ttr->compiler->Program.Constants, &constant);
}

void r300_tgsi_to_rc(struct tgsi_to_rc * ttr, const struct tgsi_token * tokens)
{
    struct tgsi_parse_context parser;
    int i;

    /* Allocate constants placeholders.
     *
     * Note: What if declared constants are not contiguous? */
    for(i = 0; i <= ttr->info->file_max[TGSI_FILE_CONSTANT]; ++i) {
        struct rc_constant constant;
        memset(&constant, 0, sizeof(constant));
        constant.Type = RC_CONSTANT_EXTERNAL;
        constant.Size = 4;
        constant.u.External = i;
        rc_constants_add(&ttr->compiler->Program.Constants, &constant);
    }

    ttr->immediate_offset = ttr->compiler->Program.Constants.Count;

    tgsi_parse_init(&parser, tokens);

    while (!tgsi_parse_end_of_tokens(&parser)) {
        tgsi_parse_token(&parser);

        switch (parser.FullToken.Token.Type) {
            case TGSI_TOKEN_TYPE_DECLARATION:
                break;
            case TGSI_TOKEN_TYPE_IMMEDIATE:
                handle_immediate(ttr, &parser.FullToken.FullImmediate);
                break;
            case TGSI_TOKEN_TYPE_INSTRUCTION:
                transform_instruction(ttr, &parser.FullToken.FullInstruction);
                break;
        }
    }

    tgsi_parse_free(&parser);

    rc_calculate_inputs_outputs(ttr->compiler);
}

