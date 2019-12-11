#include "Day01.hpp"

namespace AoC {

    Day01::Day01(int8_t id, std::string name, std::string url,
                 std::string data_file)
        : Day(id,
              std::move(name),
              std::move(url),
              std::move(data_file))
    {}
    Day01::~Day01() = default;

    void Day01::calculate_part1() {
        auto i          = int64_t {0};
        auto result     = int64_t {0};
        auto in_file    = std::ifstream(data_file);

        if (in_file) {
            while (in_file >> i)
                result += static_cast<int64_t>(std::floor(i / 3)) - 2;
            set_result(Parts::PartOne, std::to_string(result));
        } else {
            set_result(Parts::PartOne, "Data file not found.");
        }
        in_file.close();
    }

    void Day01::calculate_part2() {
        auto i          = int64_t {0};
        auto result     = int64_t {0};
        auto in_file    = std::ifstream(data_file);

        if (in_file) {
            while (in_file >> i) {
                while (i > 8) {
                    i = static_cast<int64_t>(std::floor(i / 3)) - 2;
                    result += i;
                }
            }
            set_result(Parts::PartTwo, std::to_string(result));
        } else {
            set_result(Parts::PartTwo, "Data file not found.");
        }
        in_file.close();
    }

}
