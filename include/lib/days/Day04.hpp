#pragma once

#include "Day.hpp"

namespace AoC {

    class Day04 : public Day {
    public:
        Day04() = delete;
        Day04(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day04() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}