add_compile_options(-Wall
                    -Wextra
                    -pedantic
                    -ggdb
                    -Werror)

set(SRC_FILES
  test.cc
)

add_executable(clangConfig ${SRC_FILES})

target_include_directories(clangConfig PUBLIC ${CMAKE_SOURCE_DIR}/include)
