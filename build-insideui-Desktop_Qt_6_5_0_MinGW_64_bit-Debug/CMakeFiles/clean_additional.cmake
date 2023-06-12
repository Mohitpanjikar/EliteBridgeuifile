# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\insideui_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\insideui_autogen.dir\\ParseCache.txt"
  "insideui_autogen"
  )
endif()
