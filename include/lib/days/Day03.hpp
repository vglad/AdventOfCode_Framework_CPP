#pragma once

#include <fstream>
#include <cmath>
#include <unordered_map>

#include "Day.hpp"

namespace AoC {

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
        const uint16_t dimension {30000};
        uint32_t map[30000][30000] {0};
        //std::unordered_map< std::pair<uint16_t, uint16_t>, uint8_t > uoMap;

        void create_wire_path (const std::vector<std::string> &wire,
                               uint16_t y_pos, uint16_t x_pos, uint8_t comparator);
        void draw_step(uint16_t x_pos, uint16_t y_pos, uint8_t comparator, uint64_t step_num);
        auto get_cross_map(uint32_t start_x, uint32_t start_y) -> std::vector<std::pair<int32_t, int32_t>>;
        int32_t get_min_distance(const std::vector<std::pair<int32_t, int32_t>> & cross_map);
    };

}