project(logger)

add_library(logger Logger.cpp)
target_include_directories(logger PRIVATE ../../include/logger)
