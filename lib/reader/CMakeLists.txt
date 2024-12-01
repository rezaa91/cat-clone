project(reader)

add_library(reader Reader.cpp)
target_include_directories(reader PRIVATE ../../include/reader)
