project(cat)

add_executable(cat main.cpp argParser.cpp menu.cpp)
target_link_libraries(cat reader logger)
target_include_directories(cat PUBLIC ../include)
