add_library(helper src/helper.cpp)
target_compile_features(helper PUBLIC cxx_std_17)
target_include_directories(helper PUBLIC include)

add_library(helper::helper ALIAS helper)
