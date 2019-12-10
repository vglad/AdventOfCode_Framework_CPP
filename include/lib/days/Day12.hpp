#pragma once

#include "Day.hpp"

namespace AoC {

    class Day12 : public Day {
    public:
        Day12() = delete;
        Day12(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day12() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
