if(STATIC STREQUAL "ON")
  add_library(recorder recorder.cc)
else()
  add_library(recorder SHARED recorder.cc)
endif()
install_targets(/lib recorder)
