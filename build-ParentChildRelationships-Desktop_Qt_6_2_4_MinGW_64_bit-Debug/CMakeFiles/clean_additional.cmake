# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ParentChildRelationships_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ParentChildRelationships_autogen.dir\\ParseCache.txt"
  "ParentChildRelationships_autogen"
  )
endif()
