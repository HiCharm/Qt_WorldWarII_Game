# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtWorldWarII_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtWorldWarII_autogen.dir\\ParseCache.txt"
  "QtWorldWarII_autogen"
  )
endif()
