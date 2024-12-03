project(reader_test)

enable_testing()

add_executable(
  reader_test
  reader_test.cpp
)

target_link_libraries(
  reader_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(reader_test)