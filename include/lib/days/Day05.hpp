#pragma once

#include "Day.hpp"

namespace AoC {

    class Day05 : public Day {
    public:
        Day05() = delete;
        Day05(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day05() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}