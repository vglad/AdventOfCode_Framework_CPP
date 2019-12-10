#pragma once

#include "Day.hpp"

namespace AoC {

    class Day21 : public Day {
    public:
        Day21() = delete;
        Day21(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day21() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
