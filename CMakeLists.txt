cmake_minimum_required(VERSION 3.14)
project(one CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME}
  test/main.cpp

  test/common/basic_types.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

if (MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE
    /source-charset:utf-8
    /W4
    /WX
  )
else()
  target_compile_options(${PROJECT_NAME} PRIVATE
    -Wall
    -Wextra
    -Werror
  )
endif()
