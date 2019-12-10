#pragma once

#include "Day.hpp"

namespace AoC {

    class Day08 : public Day {
    public:
        Day08() = delete;
        Day08(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day08() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
