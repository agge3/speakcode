# cmake tested versions
cmake_minimum_required(VERSION 3.22...3.27)

# project name, version, description, and language
project(speakcode
    VERSION 0.1.0
    DESCRIPTION "speak code and it runs"
    LANGUAGES CXX)

# if required libraries
#find_package(REQUIRED)

# list of source
add_executable(speakcode src/main.cpp
    # additional src
    )

# features to compile, cxx20
target_compile_features(speakcode PRIVATE cxx_std_20)

# include header files (include/)
target_include_directories(speakcode PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# linked necessary libraries
#target_link_libraries(speakcode
    #required libraries
    #)
