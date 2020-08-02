cmake_minimum_required (VERSION 3.8)

project ("sequitur")

include_directories(include)

# Add source to this project's executable.
add_executable (sequitur "src/sequitur.cpp")
