
#include <helper/helper.hpp>

#include <filesystem>
#include <iostream>
#include <numeric>

using Input = std::vector<std::string>;

auto max_calories_count(const Input& lines, int n_most_calories = 1) -> int
{
    constexpr auto empty_line = "";
    auto calories = std::vector<int> { 0 };
    auto idx = 0;
    for (const auto line : lines) {
        if (line != empty_line) {
            calories[idx] += std::stoi(line);
        } else {
            calories.push_back(0);
            ++idx;
        }
    }
    std::sort(calories.begin(), calories.end(), std::greater());
    return std::accumulate(calories.begin(), std::next(calories.begin(), n_most_calories), 0);
}

auto main() -> int
{
    const auto input_lines = helper::read_file_content(helper::default_input_path());
    std::cout << max_calories_count(input_lines) << '\n';
    std::cout << max_calories_count(input_lines, 3) << '\n';
}