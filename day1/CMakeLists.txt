
add_executable(day1 src/day1.cpp)
target_compile_features(day1 PUBLIC cxx_std_17)
target_link_libraries(day1 PUBLIC helper::helper)
configure_file(resources/example.txt example.txt COPYONLY)
configure_file(resources/input.txt input.txt COPYONLY)