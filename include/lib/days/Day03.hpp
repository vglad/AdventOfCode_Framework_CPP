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
        struct                pair_hash;
        using                 Coord =              std::pair<int32_t, int32_t >;
        using                 Data  =              std::pair<uint8_t, uint32_t >;
        using                 uMap  =              std::unordered_map<Coord, Data, pair_hash>;

        std::unique_ptr<uMap> cross_u_map;
        enum class            Run;

        std::unique_ptr<uMap> generate_wire_map   (std::unique_ptr<uMap> u_map,
                                                   const std::vector<std::string> &path,
                                                   Run run
        ) const;
        std::unique_ptr<uMap> generate_data       (std::unique_ptr<uMap> u_map,
                                                   int32_t x_pos,
                                                   int32_t y_pos,
                                                   Run run,
                                                   uint32_t step_num
        ) const;
        uint16_t        const get_min_distance    (const uMap & u_map
        ) const;
        uint32_t        const get_min_delay       (std::unique_ptr<uMap> u_map
        ) const;

    };
}