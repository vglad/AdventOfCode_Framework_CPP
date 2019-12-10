#pragma once

#include "Day.hpp"

namespace AoC {

    class Day15 : public Day {
    public:
        Day15() = delete;
        Day15(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day15() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
