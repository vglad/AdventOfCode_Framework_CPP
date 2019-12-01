#pragma once

#include "Day.hpp"

namespace aoc2018 {

    class Day01 : public Day {
    public:
        Day01();
        Day01(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day01() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}

