
#pragma once

#include <filesystem>
#include <string>
#include <vector>

namespace helper {

auto default_example_path() -> std::filesystem::path;
auto default_input_path() -> std::filesystem::path;
auto print_lines(const std::vector<std::string>& lines) -> void;
auto read_file_content(const std::filesystem::path& file_path) -> std::vector<std::string>;

}