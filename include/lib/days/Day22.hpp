#pragma once

#include "Day.hpp"

namespace AoC {

    class Day22 : public Day {
    public:
        Day22();
        Day22(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day22() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
