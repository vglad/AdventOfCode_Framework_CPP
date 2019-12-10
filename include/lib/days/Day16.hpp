#pragma once

#include "Day.hpp"

namespace AoC {

    class Day16 : public Day {
    public:
        Day16() = delete;
        Day16(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day16() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
