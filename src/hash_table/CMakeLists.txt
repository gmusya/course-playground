add_library(hash_table STATIC b.cpp)

add_executable(hash_table_test
    ut/b_test.cpp
)

target_link_libraries(hash_table_test hash_table)
target_include_directories(hash_table_test PUBLIC ${CMAKE_SOURCE_DIR}/src)
