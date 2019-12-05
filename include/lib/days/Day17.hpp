#pragma once

#include "Day.hpp"

namespace AoC {

    class Day17 : public Day {
    public:
        Day17();
        Day17(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day17() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
