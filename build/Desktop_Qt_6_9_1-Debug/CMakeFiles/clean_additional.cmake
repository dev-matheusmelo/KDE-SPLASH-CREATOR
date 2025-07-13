# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/kde_splash_creator_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/kde_splash_creator_autogen.dir/ParseCache.txt"
  "kde_splash_creator_autogen"
  )
endif()
