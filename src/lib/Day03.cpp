#include "Day03.hpp"

namespace aoc2019 {

    Day03::Day03() = default;
    Day03::Day03(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }

    void Day03::calculate_part1() {
        p1_result = "31";
    }

    void Day03::calculate_part2() {
        p2_result = "32";
    }

}