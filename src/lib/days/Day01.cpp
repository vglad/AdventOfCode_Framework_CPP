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
        auto i      = int64_t {0};
        auto result = int64_t {0};

        if (auto in_file = std::ifstream(data_file,std::ios::in | std::ios::binary);
            in_file)
        {
            while (in_file >> i)
                result += static_cast<int64_t>(i / 3) - 2;
            in_file.close();
            set_result(Parts::PartOne, std::to_string(result));
        } else {
            set_result(Parts::PartOne, "Data file not found.");
        }
    }

    void Day01::calculate_part2() {
        auto i      = int64_t {0};
        auto result = int64_t {0};

        if (auto in_file = std::ifstream(data_file);
            in_file)
        {
            while (in_file >> i) {
                while (i > 8) {
                    i = static_cast<int64_t>(i / 3) - 2;
                    result += i;
                }
            }
            in_file.close();
            set_result(Parts::PartTwo, std::to_string(result));
        } else {
            set_result(Parts::PartTwo, "Data file not found.");
        }
    }

}
