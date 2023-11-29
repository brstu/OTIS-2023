# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\OTIS333_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\OTIS333_autogen.dir\\ParseCache.txt"
  "OTIS333_autogen"
  )
endif()
