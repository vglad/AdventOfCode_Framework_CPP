#include "Day03.hpp"

#include <iostream>
#include <string>

#include "Precompiled.hpp"

namespace AoC {

    using namespace Helper;

    Day03::Day03(int8_t id, std::string name, std::string url,
                 std::string data_file)
        : Day(id,
              std::move(name),
              std::move(url),
              std::move(data_file))
    {}
    Day03::~Day03() = default;

    struct Day03::pair_hash {
        template <class T1, class T2>
        std::size_t operator() (std::pair<T1, T2> const &pair) const {
            return std::hash<T1>()(pair.first) ^ std::hash<T2>()(pair.second);
        }
    };

    enum class Day03::Run { First  = 1, Second = 2 };

    auto Day03::generate_data(int32_t x_pos, int32_t y_pos, Day03::Run run,
                              int32_t step_num, std::unique_ptr<uMap> u_map)
    -> std::unique_ptr<uMap> {
        auto const coord = Coord {std::make_pair(x_pos, y_pos)};
        if (run == Run::First) {
            auto const data = Data {
                    std::make_pair(static_cast<int8_t>(Run::First), step_num)
            };
            u_map->emplace(std::make_pair(coord, data));
        } else if (run == Run::Second) {
            auto const search = (*u_map).find(coord);
            if (search != end(*u_map)) {
                search->second.first = static_cast<int8_t>(Run::Second);
                search->second.second += step_num;
                cross_u_map->emplace(*search);
            }
        }
        return u_map;
    }


    auto Day03::generate_wire_map(
            std::vector<std::string> const& path,
            Day03::Run                      run,
            std::unique_ptr<uMap>           u_map) -> std::unique_ptr<uMap>
    {
        auto steps = int32_t{0};
        auto x_pos = int32_t{0};
        auto y_pos = int32_t{0};
        for (auto const & e : path) {
            auto const direction = e.substr(0, 1);
            auto       distance  = static_cast<int32_t>(stoi(e.substr(1)));
            while (distance > 0) {
                ++steps;
                --distance;
                if      (direction == "R") { x_pos += 1; }
                else if (direction == "L") { x_pos -= 1; }
                else if (direction == "D") { y_pos -= 1; }
                else if (direction == "U") { y_pos += 1; }
                else                       { continue;   }
                u_map = generate_data(x_pos, y_pos, run, steps, std::move(u_map));
            }
        }
        return u_map;
    }

    auto Day03::get_min_distance(Day03::uMap const& u_map) -> int32_t {
        auto constexpr comp = [](std::pair<Coord , Data> const &a,
                                 std::pair<Coord , Data> const &b) {
            return (std::abs(a.first.first) + std::abs(a.first.second))
                 < (std::abs(b.first.first) + std::abs(b.first.second));
        };
        auto const minElem = *(std::min_element(begin(u_map), end(u_map), comp));
        return std::abs(minElem.first.first) + std::abs(minElem.first.second);
    }

    auto Day03::get_min_delay(std::unique_ptr<Day03::uMap> u_map) -> int32_t {
        auto constexpr comp = [](std::pair<Coord , Data> const &a,
                                 std::pair<Coord , Data> const &b) {
            return (std::abs(a.first.first) + std::abs(a.first.second))
                 < (std::abs(b.first.first) + std::abs(b.first.second));
        };

        auto const minElem1 = *(
                std::min_element(begin(*u_map), end(*u_map), comp)
        );
        u_map->erase(minElem1.first);
        auto const minElem2 = *(
                std::min_element(begin(*u_map), end(*u_map), comp)
        );

        return minElem1.second.second < minElem2.second.second
             ? minElem1.second.second : minElem2.second.second;
    }

    void Day03::calculate_part1() {
        //set_data_file("../tests/2019/data/day03/day03_2.txt");
        auto in_file    = std::ifstream(data_file, std::ios::in | std::ios::binary);
        if (in_file) {
            auto  u_map = std::make_unique<uMap>();
            auto  s     = std::string {};
            using vPath = std::vector<std::string>;
            cross_u_map = std::make_unique<uMap>();

            in_file >> s;
            auto const path1 {tokenize_by_delim<vPath>(s, ",")};
            in_file >> s;
            auto const path2 {tokenize_by_delim<vPath>(s, ",")};

            u_map = generate_wire_map(path1, Run::First, std::move(u_map));
            u_map = generate_wire_map(path2, Run::Second, std::move(u_map));

            set_result(Parts::PartOne,
                    std::to_string(get_min_distance(*cross_u_map)));
        } else {
            set_result(Day::Parts::PartOne, "Data file not found.");
        }
        in_file.close();
    }

    void Day03::calculate_part2() {
        //set_data_file("../tests/2019/data/day03/day03_2.txt");
        auto in_file    = std::ifstream(data_file, std::ios::in | std::ios::binary);
        if (in_file) {
            auto  u_map = std::make_unique<uMap>();
            auto  s     = std::string {};
            using vPath = std::vector<std::string>;
            cross_u_map = std::make_unique<uMap>();

            in_file >> s;
            auto const path1 {tokenize_by_delim<vPath>(s, ",")};
            in_file >> s;
            auto const path2 {tokenize_by_delim<vPath>(s, ",")};

            u_map = generate_wire_map(path1, Run::First, std::move(u_map));
            u_map = generate_wire_map(path2, Run::Second, std::move(u_map));

            set_result(Day::Parts::PartTwo,
                    std::to_string(get_min_delay(std::move(cross_u_map))));
        } else {
            set_result(Day::Parts::PartTwo, "Data file not found.");
        }
        in_file.close();
    }

}
