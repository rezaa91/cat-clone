project(cat)

add_executable(cat main.cpp)
target_link_libraries(cat reader logger)
target_include_directories(cat PUBLIC ../include)
