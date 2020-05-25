set(SOURCES
        Sort.h
        Sort.cpp)
add_library(Sort ${SOURCES})
target_include_directories(Sort PUBLIC ${SRC_ROOT_DIR})
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})
add_subdirectory(tests)