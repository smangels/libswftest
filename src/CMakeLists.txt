add_library (swftest STATIC swftest.c)

target_include_directories (swftest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})