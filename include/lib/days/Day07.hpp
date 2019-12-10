#pragma once

#include "Day.hpp"

namespace AoC {

    class Day07 : public Day {
    public:
        Day07() = delete;
        Day07(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day07() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
