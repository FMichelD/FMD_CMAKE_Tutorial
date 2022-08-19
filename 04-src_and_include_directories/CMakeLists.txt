cmake_minimum_required(VERSION 3.10)

# set the project name
project(Multifiles)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)

#add the sources using the set command as follows:
set(
    SOURCES 
    src/function01.c 
    src/function02.c
)

# add the executable
add_executable(Multifiles src/main.c ${SOURCES})

# The following folder will be included
target_include_directories(Multifiles PUBLIC ${PROJECT_SOURCE_DIR}/include)

install(TARGETS Multifiles DESTINATION ${CMAKE_BINARY_DIR}) 
