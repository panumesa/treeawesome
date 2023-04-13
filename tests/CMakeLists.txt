include_directories(../src)
project(jegative)
project(jositive)
add_executable(jegative negative.cpp)
add_executable(jositive positive.cpp)
target_link_libraries(jegative PRIVATE Boost::unit_test_framework)
target_link_libraries(jositive PRIVATE Boost::unit_test_framework)
enable_testing()
add_test(
        NAME simple
        COMMAND jegative
)
add_test(
        NAME simple2
        COMMAND jositive
)