# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\StudentGrade_FirstWidgetProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\StudentGrade_FirstWidgetProject_autogen.dir\\ParseCache.txt"
  "StudentGrade_FirstWidgetProject_autogen"
  )
endif()
