#pragma once

#include "Day.hpp"

namespace AoC {

    class Day19 : public Day {
    public:
        Day19() = delete;
        Day19(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day19() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
