
#include "helper/helper.hpp"

#include <fstream>
#include <iostream>
#include <istream>

auto helper::default_example_path() -> std::filesystem::path
{
    return std::filesystem::current_path() / "example.txt";
}

auto helper::default_input_path() -> std::filesystem::path
{
    return std::filesystem::current_path() / "input.txt";
}

auto helper::print_lines(const std::vector<std::string>& lines) -> void
{
    for (const auto& line : lines) {
        std::cout << line << '\n';
    }
}

auto helper::read_file_content(const std::filesystem::path& file_path)
    -> std::vector<std::string>
{
    auto file_stream = std::ifstream { file_path };
    if (!file_stream) {
        std::cerr << "could not read file at path : " << file_path << '\n';
        return {};
    }
    std::string current_line {};
    std::vector<std::string> lines {};
    while (std::getline(file_stream, current_line)) {
        lines.push_back(current_line);
    }
    return lines;
}
