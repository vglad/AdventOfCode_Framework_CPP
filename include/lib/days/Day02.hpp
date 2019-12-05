#pragma once

#include "Day.hpp"

namespace AoC {

    class Day02 : public Day {
    public:
        Day02();
        Day02(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day02() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}