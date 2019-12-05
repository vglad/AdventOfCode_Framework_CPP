#pragma once

#include "Day.hpp"

namespace AoC {

    class Day20 : public Day {
    public:
        Day20();
        Day20(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day20() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
