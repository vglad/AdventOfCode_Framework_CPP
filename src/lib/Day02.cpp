#include "Day02.hpp"

namespace aoc2018 {

    Day02::Day02() = default;
    Day02::Day02(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }

    void Day02::calculate_part1() {
        p1_result = "21";
    }

    void Day02::calculate_part2() {
        p2_result = "22";
    }

}

