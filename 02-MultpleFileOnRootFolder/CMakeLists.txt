cmake_minimum_required(VERSION 3.10)

# set the project name
project(Multifiles)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories(${PROJECT_SOURCE_DIR})

# add the sources using the set command as follows:
set(SRC 
    main.c
    doubleFunction.c
    printFunction.c
)

# add the executable
add_executable(${CMAKE_PROJECT_NAME} ${SRC})
