﻿cmake_minimum_required (VERSION 3.8)

if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("my_first_cmake_project")

add_executable (my_first_cmake_project "my_first_cmake_project.cpp"  "my_first_cmake_program.h" "my_first_cmake_program.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET my_first_cmake_project PROPERTY CXX_STANDARD 20)
endif()