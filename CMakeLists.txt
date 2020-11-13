cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 14)

project ("sequitur")

include_directories(include)

# Add source to this project's executable.
add_executable (sequitur "src/main.cpp" "src/validArgs.cpp")
