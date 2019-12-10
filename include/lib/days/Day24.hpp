#pragma once

#include "Day.hpp"

namespace AoC {

    class Day24 : public Day {
    public:
        Day24() = delete;
        Day24(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day24() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
