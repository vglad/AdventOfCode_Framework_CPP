#pragma once

#include "Day.hpp"

namespace AoC {

    class Day11 : public Day {
    public:
        Day11() = delete;
        Day11(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day11() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
