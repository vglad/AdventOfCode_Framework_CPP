#include "Day01.hpp"

namespace aoc2019 {

    Day01::Day01() = default;;
    Day01::Day01(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }

    void Day01::calculate_part1() {
        int64_t i{0}, result{0};
        std::ifstream in_file(data_file);
        if (in_file) {
            while (in_file >> i) {
                result += std::floor(i / 3) - 2;
            }
            in_file.close();
            p1_result = std::to_string(result);
        } else {
            p1_result = "Data file not found.";
        }
    }

    void Day01::calculate_part2() {
        int64_t i{0}, result{0};
        std::ifstream in_file(data_file);
        if (in_file) {
            while (in_file >> i) {
                while (i > 8) {
                    i = std::floor(i / 3) - 2;
                    result += i;
                }
            }
            in_file.close();
            p2_result = std::to_string(result);
        } else {
            p2_result = "Data file not found.";
        }
    }

}
