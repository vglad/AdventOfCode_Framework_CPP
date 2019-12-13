#pragma once
#include "Day.hpp"

#include <fstream>
#include <cmath>
#include <unordered_map>

namespace AoC {

    class Day03 : public Day {
      public:
        Day03() = delete;
        explicit Day03(int8_t          id,
                       std::string     name,
                       std::string     url,
                       std::string     data_file);
        ~Day03() override;

        void calculate_part1() override;
        void calculate_part2() override;

      private:
        struct      pair_hash;
        using       Coord =     std::pair<int32_t, int32_t >;
        using       Data  =     std::pair<int8_t,  int32_t >;
        using       uMap  =     std::unordered_map<Coord, Data, pair_hash>;

        enum class Run { First  = 1, Second = 2 };

        auto generate_wire_map( std::vector<std::string> const&  path,
                                Run                              run,
                                std::unique_ptr<uMap>            u_map
        )-> std::unique_ptr<uMap>;

        auto generate_data(     int32_t      x_pos,
                                int32_t      y_pos,
                                Run          run,
                                int32_t      step_num,
                                std::unique_ptr<uMap> u_map
        )-> std::unique_ptr<uMap>;

        auto get_min_distance(  uMap const&           u_map) -> int32_t;
        auto get_min_delay(     std::unique_ptr<uMap> u_map) -> int32_t;

        std::unique_ptr<uMap> cross_u_map;
    };
}