# Makefile.in generated by automake 1.11 from Makefile.am.
# man/xkb/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004, 2005, 2006, 2007, 2008, 2009  Free Software Foundation,
# Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



# Have to fake out automake by calling our man pages "DATA" since "MANS" won't
# accept .3x as a valid man page suffix

#							-*- Makefile -*-
# Rules for generating files using the C pre-processor
# (Replaces CppFileTarget from Imake)


pkgdatadir = $(datadir)/libX11
pkgincludedir = $(includedir)/libX11
pkglibdir = $(libdir)/libX11
pkglibexecdir = $(libexecdir)/libX11
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = i686-pc-linux-gnu
host_triplet = i686-pc-linux-gnu
DIST_COMMON = $(srcdir)/Makefile.am $(srcdir)/Makefile.in \
	$(top_srcdir)/cpprules.in
subdir = man/xkb
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/acinclude.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/src/config.h \
	$(top_builddir)/include/X11/XlibConf.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN   " $@;
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
SOURCES =
DIST_SOURCES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__installdirs = "$(DESTDIR)$(libmandir)"
DATA = $(libman_DATA)
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/missing --run aclocal-1.11
ADMIN_MAN_DIR = $(mandir)/man$(ADMIN_MAN_SUFFIX)
ADMIN_MAN_SUFFIX = 8
AMTAR = ${SHELL} /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/missing --run tar
AM_DEFAULT_VERBOSITY = 0
APP_MAN_DIR = $(mandir)/man$(APP_MAN_SUFFIX)
APP_MAN_SUFFIX = 1
AR = ar
AUTOCONF = ${SHELL} /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/missing --run autoconf
AUTOHEADER = ${SHELL} /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/missing --run autoheader
AUTOMAKE = ${SHELL} /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/missing --run automake-1.11
AWK = gawk
BIGFONT_CFLAGS = 
BIGFONT_LIBS = 
CC = gcc -std=gnu99
CCDEPMODE = depmode=gcc3
CC_FOR_BUILD = gcc -std=gnu99
CFLAGS = -g -O2
CHANGELOG_CMD = (GIT_DIR=$(top_srcdir)/.git git log > .changelog.tmp && mv .changelog.tmp ChangeLog) || (rm -f .changelog.tmp; touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)
CPP = gcc -E
CPPFLAGS = 
CWARNFLAGS = -Wall -Wpointer-arith -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wnested-externs -fno-strict-aliasing -Wbad-function-cast -Wold-style-definition -Wdeclaration-after-statement 
CXX = g++
CXXCPP = g++ -E
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -g -O2
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DOLT_BASH = /bin/bash
DRIVER_MAN_DIR = $(mandir)/man$(DRIVER_MAN_SUFFIX)
DRIVER_MAN_SUFFIX = 4
DSYMUTIL = 
ECHO = echo
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
F77 = 
FFLAGS = 
FILE_MAN_DIR = $(mandir)/man$(FILE_MAN_SUFFIX)
FILE_MAN_SUFFIX = 5
GREP = /bin/grep
GROFF = none
I18N_MODULE_LIBS = 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
KEYSYMDEF = /usr/include/X11/keysymdef.h
LAUNCHD = no
LDFLAGS = 
LIBOBJS = 
LIBS = -ldl 
LIBTOOL = $(top_builddir)/doltlibtool
LIB_MAN_DIR = $(mandir)/man$(LIB_MAN_SUFFIX)
LIB_MAN_SUFFIX = 3
LINT = no
LINTLIB = 
LINT_FLAGS =  -D_BSD_SOURCE -DHAS_FCHOWN -DHAS_STICKY_DIR_BIT       
LN_S = ln -s
LTCOMPILE = $(top_builddir)/doltcompile $(COMPILE)
LTCXXCOMPILE = $(top_builddir)/doltcompile $(CXXCOMPILE)
LTLIBOBJS = 
MAINT = #
MAKEINFO = ${SHELL} /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/missing --run makeinfo
MALLOC_ZERO_CFLAGS = -DMALLOC_0_RETURNS_NULL
MISC_MAN_DIR = $(mandir)/man$(MISC_MAN_SUFFIX)
MISC_MAN_SUFFIX = 7
MKDIR_P = /bin/mkdir -p
NMEDIT = 
OBJEXT = o
PACKAGE = libX11
PACKAGE_BUGREPORT = https://bugs.freedesktop.org/enter_bug.cgi?product=xorg
PACKAGE_NAME = libX11
PACKAGE_STRING = libX11 1.3.2
PACKAGE_TARNAME = libX11
PACKAGE_VERSION = 1.3.2
PATH_SEPARATOR = :
PERL = perl
PKG_CONFIG = /usr/bin/pkg-config
PS2PDF = /usr/bin/ps2pdf
RANLIB = ranlib
RAWCPP = /usr/bin/cpp
RAWCPPFLAGS = -undef -traditional
SED = sed
SET_MAKE = 
SHELL = /bin/bash
STRIP = strip
VERSION = 1.3.2
WCHAR32 = 1
X11_CFLAGS = -Wall -Wpointer-arith -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wnested-externs -fno-strict-aliasing -Wbad-function-cast -Wold-style-definition -Wdeclaration-after-statement  -Wall -Wpointer-arith -Wstrict-prototypes 	-Wmissing-prototypes -Wmissing-declarations 	-Wnested-externs -fno-strict-aliasing -D_BSD_SOURCE -DHAS_FCHOWN -DHAS_STICKY_DIR_BIT       
X11_DATADIR = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/share/X11
X11_EXTRA_DEPS = xcb >= 1.1.92
X11_LIBDIR = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/lib/X11
X11_LIBS = -lxcb    
X11_LOCALEDATADIR = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/share/X11/locale
X11_LOCALEDIR = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/share/X11/locale
X11_LOCALELIBDIR = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/lib/X11/locale
XDMCP_CFLAGS = 
XDMCP_LIBS = 
XERRORDB = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/share/X11/XErrorDB
XKBPROTO_CFLAGS =  
XKBPROTO_LIBS =  
XKBPROTO_REQUIRES = kbproto
XKEYSYMDB = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/share/X11/XKeysymDB
XLOCALEDATADIR = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/share/X11/locale
XLOCALEDIR = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/share/X11/locale
XLOCALELIBDIR = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11/lib/X11/locale
XMALLOC_ZERO_CFLAGS = -DMALLOC_0_RETURNS_NULL
XPROTO_CFLAGS =  
XPROTO_LIBS =  
XTHREADLIB = -lpthread
XTHREAD_CFLAGS = 
XTMALLOC_ZERO_CFLAGS = -DMALLOC_0_RETURNS_NULL -DXTMALLOC_BC
abs_builddir = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/man/xkb
abs_srcdir = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/man/xkb
abs_top_builddir = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2
abs_top_srcdir = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_F77 = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = ${AMTAR} chof - "$$tardir"
am__untar = ${AMTAR} xf -
bindir = ${exec_prefix}/bin
build = i686-pc-linux-gnu
build_alias = 
build_cpu = i686
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
distcleancheck_listfiles = find . -type f ! -name ChangeLog -print
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = i686-pc-linux-gnu
host_alias = 
host_cpu = i686
host_os = linux-gnu
host_vendor = pc
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/src/x11/libx11-1.3.2/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = /bin/mkdir -p
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /home/xeno1/rexeno/rexeno/3rdparties/linux-ububuntu-10-04-noxeno/target/x11
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
libmandir = $(LIB_MAN_DIR)
LIB_MAN_DIR_SUFFIX = $(LIB_MAN_DIR:${datarootdir}/man/man%=%)
libman_PRE = \
	XkbActionCtrls.man                      \
	XkbAddDeviceLedInfo.man                 \
	XkbAddGeomColor.man                     \
	XkbAddGeomDoodad.man                    \
	XkbAddGeomKey.man                       \
	XkbAddGeomKeyAlias.man                  \
	XkbAddGeomOutline.man                   \
	XkbAddGeomOverlay.man                   \
	XkbAddGeomOverlayKey.man                \
	XkbAddGeomOverlayRow.man                \
	XkbAddGeomProperty.man                  \
	XkbAddGeomRow.man                       \
	XkbAddGeomSection.man                   \
	XkbAddGeomShape.man                     \
	XkbAddSymInterpret.man                  \
	XkbAllocClientMap.man                   \
	XkbAllocCompatMap.man                   \
	XkbAllocControls.man                    \
	XkbAllocDeviceInfo.man                  \
	XkbAllocDeviceLedInfo.man               \
	XkbAllocGeomColors.man                  \
	XkbAllocGeomDoodads.man                 \
	XkbAllocGeomKeyAliases.man              \
	XkbAllocGeomKeys.man                    \
	XkbAllocGeomOutlines.man                \
	XkbAllocGeomOverlayKey.man              \
	XkbAllocGeomOverlayRows.man             \
	XkbAllocGeomOverlays.man                \
	XkbAllocGeomPoints.man                  \
	XkbAllocGeomProps.man                   \
	XkbAllocGeomRows.man                    \
	XkbAllocGeomSectionDoodads.man          \
	XkbAllocGeomSections.man                \
	XkbAllocGeomShapes.man                  \
	XkbAllocGeometry.man                    \
	XkbAllocIndicatorMaps.man               \
	XkbAllocKeyboard.man                    \
	XkbAllocNames.man                       \
	XkbAllocServerMap.man                   \
	XkbApplyCompatMapToKey.man              \
	XkbBell.man                             \
	XkbBellEvent.man                        \
	XkbChangeControls.man                   \
	XkbChangeDeviceInfo.man                 \
	XkbChangeEnabledControls.man            \
	XkbChangeIndicators.man                 \
	XkbChangeMap.man                        \
	XkbChangeNames.man                      \
	XkbChangeTypesOfKey.man                 \
	XkbComputeRowBounds.man                 \
	XkbComputeSectionBounds.man             \
	XkbComputeShapeBounds.man               \
	XkbComputeShapeTop.man                  \
	XkbCopyKeyType.man                      \
	XkbCopyKeyTypes.man                     \
	XkbDeviceBell.man                       \
	XkbDeviceBellEvent.man                  \
	XkbFindOverlayForKey.man                \
	XkbForceBell.man                        \
	XkbForceDeviceBell.man                  \
	XkbFreeClientMap.man                    \
	XkbFreeCompatMap.man                    \
	XkbFreeComponentList.man                \
	XkbFreeControls.man                     \
	XkbFreeDeviceInfo.man                   \
	XkbFreeGeomColors.man                   \
	XkbFreeGeomDoodads.man                  \
	XkbFreeGeomKeyAliases.man               \
	XkbFreeGeomKeys.man                     \
	XkbFreeGeomOutlines.man                 \
	XkbFreeGeomOverlayKeys.man              \
	XkbFreeGeomOverlayRows.man              \
	XkbFreeGeomOverlays.man                 \
	XkbFreeGeomPoints.man                   \
	XkbFreeGeomProperties.man               \
	XkbFreeGeomRows.man                     \
	XkbFreeGeomSections.man                 \
	XkbFreeGeomShapes.man                   \
	XkbFreeGeometry.man                     \
	XkbFreeIndicatorMaps.man                \
	XkbFreeKeyboard.man                     \
	XkbFreeNames.man                        \
	XkbFreeServerMap.man                    \
	XkbGetAccessXTimeout.man                \
	XkbGetAutoRepeatRate.man                \
	XkbGetAutoResetControls.man             \
	XkbGetBounceKeysDelay.man               \
	XkbGetCompatMap.man                     \
	XkbGetControls.man                      \
	XkbGetControlsChanges.man               \
	XkbGetDetectableAutorepeat.man          \
	XkbGetDeviceButtonActions.man           \
	XkbGetDeviceInfo.man                    \
	XkbGetDeviceInfoChanges.man             \
	XkbGetDeviceLedInfo.man                 \
	XkbGetGeometry.man                      \
	XkbGetIndicatorChanges.man              \
	XkbGetIndicatorMap.man                  \
	XkbGetIndicatorState.man                \
	XkbGetKeyActions.man                    \
	XkbGetKeyBehaviors.man                  \
	XkbGetKeyExplicitComponents.man         \
	XkbGetKeyModifierMap.man                \
	XkbGetKeySyms.man                       \
	XkbGetKeyTypes.man                      \
	XkbGetKeyVirtualModMap.man              \
	XkbGetKeyboard.man                      \
	XkbGetKeyboardByName.man                \
	XkbGetMap.man                           \
	XkbGetNameChanges.man                   \
	XkbGetNamedGeometry.man                 \
	XkbGetNamedIndicator.man                \
	XkbGetNames.man                         \
	XkbGetSlowKeysDelay.man                 \
	XkbGetState.man                         \
	XkbGetStickyKeysOptions.man             \
	XkbGetUpdatedMap.man                    \
	XkbGetVirtualMods.man                   \
	XkbGetXlibControls.man                  \
	XkbIgnoreExtension.man                  \
	XkbInitCanonicalKeyTypes.man            \
	XkbKeyAction.man                        \
	XkbKeyActionEntry.man                   \
	XkbKeyActionsPtr.man                    \
	XkbKeyGroupInfo.man                     \
	XkbKeyGroupWidth.man                    \
	XkbKeyGroupsWidth.man                   \
	XkbKeyHasActions.man                    \
	XkbKeyNumActions.man                    \
	XkbKeyNumGroups.man                     \
	XkbKeyNumSyms.man                       \
	XkbKeySymEntry.man                      \
	XkbKeySymsOffset.man                    \
	XkbKeySymsPtr.man                       \
	XkbKeyType.man                          \
	XkbKeyTypeIndex.man                     \
	XkbKeyTypesForCoreSymbols.man           \
	XkbKeycodeToKeysym.man                  \
	XkbKeysymToModifiers.man                \
	XkbLatchGroup.man                       \
	XkbLatchModifiers.man                   \
	XkbLibraryVersion.man                   \
	XkbListComponents.man                   \
	XkbLockGroup.man                        \
	XkbLockModifiers.man                    \
	XkbLookupKeyBinding.man                 \
	XkbLookupKeySym.man                     \
	XkbModActionVMods.man                   \
	XkbNoteControlsChanges.man              \
	XkbNoteDeviceChanges.man                \
	XkbNoteIndicatorChanges.man             \
	XkbNoteNameChanges.man                  \
	XkbOpenDisplay.man                      \
	XkbOutOfRangeGroupInfo.man              \
	XkbOutOfRangeGroupNumber.man            \
	XkbPtrActionX.man                       \
	XkbPtrActionY.man                       \
	XkbQueryExtension.man                   \
	XkbRefreshKeyboardMapping.man           \
	XkbResizeDeviceButtonActions.man        \
	XkbResizeKeyActions.man                 \
	XkbResizeKeySyms.man                    \
	XkbResizeKeyType.man                    \
	XkbSAActionSetCtrls.man                 \
	XkbSAGroup.man                          \
	XkbSAPtrDfltValue.man                   \
	XkbSARedirectSetVMods.man               \
	XkbSARedirectSetVModsMask.man           \
	XkbSARedirectVMods.man                  \
	XkbSARedirectVModsMask.man              \
	XkbSAScreen.man                         \
	XkbSASetGroup.man                       \
	XkbSASetPtrDfltValue.man                \
	XkbSASetScreen.man                      \
	XkbSelectEventDetails.man               \
	XkbSelectEvents.man                     \
	XkbSetAccessXTimeout.man                \
	XkbSetAutoRepeatRate.man                \
	XkbSetAutoResetControls.man             \
	XkbSetBounceKeysDelay.man               \
	XkbSetCompatMap.man                     \
	XkbSetControls.man                      \
	XkbSetDebuggingFlags.man                \
	XkbSetDetectableAutorepeat.man          \
	XkbSetDeviceButtonActions.man           \
	XkbSetDeviceInfo.man                    \
	XkbSetIgnoreLockMods.man                \
	XkbSetIndicatorMap.man                  \
	XkbSetMap.man                           \
	XkbSetModActionVMods.man                \
	XkbSetNamedIndicator.man                \
	XkbSetNames.man                         \
	XkbSetPtrActionX.man                    \
	XkbSetPtrActionY.man                    \
	XkbSetServerInternalMods.man            \
	XkbSetXlibControls.man                  \
	XkbTranslateKeyCode.man                 \
	XkbTranslateKeySym.man                  \
	XkbUpdateMapFromCore.man                \
	XkbVirtualModsToReal.man                


# What we actually install 
libman_DATA = $(libman_PRE:man=3)
EXTRA_DIST = $(libman_PRE)
CLEANFILES = $(libman_DATA)
SUFFIXES = .pre .$(LIB_MAN_SUFFIX) .man
WCHAR32_FLAGS = -DWCHAR32=1
CPP_FILES_FLAGS = $(WCHAR32_FLAGS)

# Translate XCOMM into pound sign with sed, rather than passing -DXCOMM=XCOMM
# to cpp, because that trick does not work on all ANSI C preprocessors.
# Delete line numbers from the cpp output (-P is not portable, I guess).
# Allow XCOMM to be preceded by whitespace and provide a means of generating
# output lines with trailing backslashes.
# Allow XHASH to always be substituted, even in cases where XCOMM isn't.
CPP_SED_MAGIC = $(SED) -e '/^\#  *[0-9][0-9]*  *.*$$/d' \
                       -e '/^\#line  *[0-9][0-9]*  *.*$$/d' \
                       -e '/^[         ]*XCOMM$$/s/XCOMM/\#/' \
                       -e '/^[         ]*XCOMM[^a-zA-Z0-9_]/s/XCOMM/\#/' \
                       -e '/^[         ]*XHASH/s/XHASH/\#/' \
                       -e 's,X11_LOCALEDATADIR,$(X11_LOCALEDATADIR),g' \
                       -e '/\@\@$$/s/\@\@$$/\\/'

XORGRELSTRING = libX11 1.3.2
XORGMANNAME = X Version 11
MANDEFS = -D__libmansuffix__=$(LIB_MAN_SUFFIX) \
	-D__xorgversion__="\"$(XORGRELSTRING)\" \"$(XORGMANNAME)\""

CPP_MAN_FLAGS = $(MANDEFS) $(EXTRAMANDEFS)
all: all-am

.SUFFIXES:
.SUFFIXES: .pre .$(LIB_MAN_SUFFIX) .man
$(srcdir)/Makefile.in: # $(srcdir)/Makefile.am $(top_srcdir)/cpprules.in $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign man/xkb/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign man/xkb/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure: # $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4): # $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-libmanDATA: $(libman_DATA)
	@$(NORMAL_INSTALL)
	test -z "$(libmandir)" || $(MKDIR_P) "$(DESTDIR)$(libmandir)"
	@list='$(libman_DATA)'; test -n "$(libmandir)" || list=; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(libmandir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(libmandir)" || exit $$?; \
	done

uninstall-libmanDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(libman_DATA)'; test -n "$(libmandir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	test -n "$$files" || exit 0; \
	echo " ( cd '$(DESTDIR)$(libmandir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(libmandir)" && rm -f $$files
tags: TAGS
TAGS:

ctags: CTAGS
CTAGS:


distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(DATA)
installdirs:
	for dir in "$(DESTDIR)$(libmandir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -f Makefile
distclean-am: clean-am distclean-generic

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-libmanDATA

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-libmanDATA

.MAKE: install-am install-strip

.PHONY: all all-am check check-am clean clean-generic clean-libtool \
	distclean distclean-generic distclean-libtool distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-dvi install-dvi-am \
	install-exec install-exec-am install-html install-html-am \
	install-info install-info-am install-libmanDATA install-man \
	install-pdf install-pdf-am install-ps install-ps-am \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-generic mostlyclean-libtool pdf pdf-am ps ps-am \
	uninstall uninstall-am uninstall-libmanDATA


.pre:
	$(AM_V_GEN)$(RAWCPP) $(RAWCPPFLAGS) $(CPP_FILES_FLAGS) < $< | $(CPP_SED_MAGIC) > $@

.man.$(LIB_MAN_SUFFIX):
	$(AM_V_GEN)$(RAWCPP) $(RAWCPPFLAGS) $(CPP_MAN_FLAGS) < $< | $(CPP_SED_MAGIC) > $@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
