# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/TeslaSpeedometerUI_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/TeslaSpeedometerUI_autogen.dir/ParseCache.txt"
  "TeslaSpeedometerUI_autogen"
  )
endif()
