#pragma once

#include "Day.hpp"

namespace AoC {

    class Day13 : public Day {
    public:
        Day13();
        Day13(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day13() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
