# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\elitebridge_ui_file_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\elitebridge_ui_file_autogen.dir\\ParseCache.txt"
  "elitebridge_ui_file_autogen"
  )
endif()
