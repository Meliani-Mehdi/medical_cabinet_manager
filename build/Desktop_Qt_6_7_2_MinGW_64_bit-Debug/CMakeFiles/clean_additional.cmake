# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\medical_cabinet_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\medical_cabinet_autogen.dir\\ParseCache.txt"
  "medical_cabinet_autogen"
  )
endif()
