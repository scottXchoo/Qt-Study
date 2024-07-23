# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/simple_speedometer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/simple_speedometer_autogen.dir/ParseCache.txt"
  "simple_speedometer_autogen"
  )
endif()
