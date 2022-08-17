cmake_minimum_required(VERSION 3.10)

# set the project name
project(MultifilesSharedLib)

# Set the output folder where your program will be created
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

# The following folder will be included
include_directories(${PROJECT_SOURCE_DIR})

# add the sources using the set command as follows:
set(SRC 
    main.c
    doubleFunction.c
    # printFunction.c # will be created a library from this source file
)

# Generate the shared library from the sources
# printFunction is compiled as a shared object (.dll in Window or .so in Linux)
# while doubleFunction is staticaly compiled inside executable
add_library(PrintFunction SHARED printFunction.c)
set_target_properties(PrintFunction
    PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
set_property(TARGET PrintFunction PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/bin/PrintFunction.dll")
set_property(TARGET PrintFunction PROPERTY IMPORTED_IMPLIB "${PROJECT_SOURCE_DIR}/lib/PrintFunction.dll.a")


#add the executable
add_executable(${CMAKE_PROJECT_NAME} ${SRC})
target_link_libraries(${CMAKE_PROJECT_NAME}  PrintFunction)

