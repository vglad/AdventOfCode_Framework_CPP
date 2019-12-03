#pragma once

#include <fstream>
#include <cmath>

#include "Day.hpp"

namespace aoc2019 {

    class Day03 : public Day {
    public:
        Day03();
        Day03(uint8_t id, std::string name, std::string url,
              std::string data_file
        );
        ~Day03() override;

        void calculate_part1() override;
        void calculate_part2() override;

    private:
        void create_wire_path (const std::vector<std::string> &wire,
                               int64_t y_pos, int64_t x_pos, int8_t comparator);

        void draw_step(int64_t x_pos, int64_t y_pos, int8_t comparator);
        int64_t map[200][200] {0};
    };

}