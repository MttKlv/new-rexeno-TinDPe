if(STATIC STREQUAL "ON")
  add_library(textures imageload.cc)
else()
  add_library(textures SHARED imageload.cc)
endif()
install_targets(/lib textures)
