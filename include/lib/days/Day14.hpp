#pragma once

#include "Day.hpp"

namespace AoC {

    class Day14 : public Day {
    public:
        Day14() = delete;
        Day14(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day14() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
