#pragma once

#include "Day.hpp"

namespace AoC {

    class Day23 : public Day {
    public:
        Day23() = delete;
        Day23(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day23() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
