#include "Day01.hpp"

namespace AoC {

    Day01::Day01(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }
    Day01::~Day01() = default;

    void Day01::calculate_part1() {
        int64_t i{0}, result{0};
        std::ifstream in_file(data_file);
        if (in_file) {
            while (in_file >> i) {
                result += static_cast<int64_t>(std::floor(i / 3)) - 2;
            }
            in_file.close();
            set_result(Parts::PARTONE, std::to_string(result));
        } else {
            set_result(Parts::PARTONE, "Data file not found.");
        }
    }

    void Day01::calculate_part2() {
        int64_t i{0}, result{0};
        std::ifstream in_file(data_file);
        if (in_file) {
            while (in_file >> i) {
                while (i > 8) {
                    i = static_cast<int64_t>(std::floor(i / 3)) - 2;
                    result += i;
                }
            }
            in_file.close();
            set_result(Parts::PARTTWO, std::to_string(result));
        } else {
            set_result(Parts::PARTTWO, "Data file not found.");
        }
    }

}
