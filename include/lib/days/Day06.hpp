#pragma once

#include "Day.hpp"

namespace AoC {

    class Day06 : public Day {
    public:
        Day06() = delete;
        Day06(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day06() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
