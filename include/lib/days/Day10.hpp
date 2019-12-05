#pragma once

#include "Day.hpp"

namespace AoC {

    class Day10 : public Day {
    public:
        Day10();
        Day10(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day10() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
