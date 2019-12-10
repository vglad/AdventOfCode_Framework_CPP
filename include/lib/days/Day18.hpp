#pragma once

#include "Day.hpp"

namespace AoC {

    class Day18 : public Day {
    public:
        Day18() = delete;
        Day18(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day18() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
