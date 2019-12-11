#pragma once
#include "Day.hpp"

#include <fstream>
#include <cmath>

namespace AoC {

    class Day01 : public Day {
      public:
        Day01() = delete;
        explicit Day01( int8_t          id,
                        std::string     name,
                        std::string     url,
                        std::string     data_file);
        ~Day01() override;

        void calculate_part1() override;
        void calculate_part2() override;

    };

}