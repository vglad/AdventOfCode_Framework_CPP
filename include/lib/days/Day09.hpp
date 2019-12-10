#pragma once

#include "Day.hpp"

namespace AoC {

    class Day09 : public Day {
    public:
        Day09() = delete;
        Day09(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day09() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
