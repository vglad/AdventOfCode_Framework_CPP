#pragma once

#include "Day.hpp"

namespace AoC {

    class Day25 : public Day {
    public:
        Day25() = delete;
        Day25(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day25() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}
