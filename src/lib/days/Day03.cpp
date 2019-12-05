#include <iostream>
#include <string>

#include "Precompiled.hpp"
#include "Day03.hpp"

namespace AoC {
    using namespace Helper;

    Day03::Day03() = default;
    Day03::Day03(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }
    Day03::~Day03() = default;


    void Day03::draw_step (uint16_t x_pos, uint16_t y_pos, uint8_t comparator, uint64_t step_num) {
        if (map[y_pos][x_pos] == comparator) {
            map[y_pos][x_pos] += 1;
        }

//        std::pair<uint16_t, uint16_t> p{x_pos, y_pos};
//        if (comparator == 0) {
//            uoMap.try_emplace(p, 1);
//        } else if (comparator == 1) {
//            auto search = uoMap.find(p);
//            if (search != uoMap.end()) {
//                if (search->second == 1) search->second = 2;
//            }
//        }
    }

    void Day03::create_wire_path (const std::vector<std::string> &wire,
                                  uint16_t y_pos, uint16_t x_pos, uint8_t comparator)
    {
        for (const auto & e : wire) {
            const std::string direction{e.substr(0, 1)};
            auto path = stoi(e.substr(1));
            uint64_t steps {0};
            while (path > 0) {
                ++steps;
                --path;
                if (direction == "R") {
                    draw_step(x_pos, y_pos, comparator, steps);
                    x_pos += 1;
                } else if (direction == "L") {
                    x_pos -= 1;
                    draw_step(x_pos, y_pos, comparator, steps);
                } else if (direction == "D") {
                    y_pos += 1;
                    draw_step(x_pos, y_pos, comparator, steps);
                } else { //if (direction == "U")
                    y_pos -= 1;
                    draw_step(x_pos, y_pos, comparator, steps);
                }
            }
        }
    }

    auto Day03::get_cross_map(uint32_t start_x, uint32_t start_y) -> std::vector<std::pair<int32_t, int32_t>>{
        std::vector<std::pair<int32_t, int32_t>> crossing {};
        map[start_x][start_y] = 0;
        for (auto i = 0; i < dimension; ++i){
            for (auto j = 0; j < dimension; ++j) {
                if (map[i][j] == 2) {
                    std::pair<int32_t, int32_t> p {start_y - i, j - start_x};
                    crossing.emplace_back(p);
                }
            }
        }
        return std::move(crossing);
    }

    int32_t Day03::get_min_distance(const std::vector<std::pair<int32_t, int32_t>> &cross_map) {
        auto comp = [](const std::pair<int32_t, int32_t> & a, const std::pair<int32_t, int32_t> & b) {
            return (std::abs(a.first) + std::abs(a.second)) < (std::abs(b.first) + std::abs(b.second));
        };
        auto minElem = *(std::min_element(begin(cross_map), end(cross_map), comp));
        return std::abs(minElem.first) + std::abs(minElem.second);
    }

    void Day03::calculate_part1() {
        std::ifstream in_file(data_file, std::ios::in | std::ios::binary);
        if (in_file) {
            std::string sw1, sw2;
            const auto y_pos = dimension / 2, x_pos = dimension / 2;

            in_file >> sw1;
            const auto w1 {tokenize_by_delim<std::vector<std::string>>(sw1, ",")};
            create_wire_path(w1, y_pos,x_pos, 0);

            in_file >> sw2;
            auto w2 {tokenize_by_delim<std::vector<std::string>>(sw2, ",")};
            create_wire_path(w2, y_pos,x_pos, 1);

            auto cross_map = get_cross_map(x_pos, y_pos);
            set_result(Day::Parts::PARTONE, std::to_string(get_min_distance(cross_map)));
        } else {
            set_result(Day::Parts::PARTONE, "Data file not found.");
        }
    }

    void Day03::calculate_part2() {
        //std::cout << x << "  " << y << "\n\n";
        //std::cout << distance << "\n\n";

    }

}

//while (in_file >> i) {
//
//}
//
//in_file.close();
//p1_result =   std::to_string(w1.size())
//              + "  "
//              + std::to_string(w2.size());


//const int8_t v_size = w1.size();
//for (auto pair = 0; pair < v_size; ++pair) {
//    std::string p1 = w1[pair];
//    std::string p2 = w2[pair];
//
//}


//std::cout << direction << "  " << path << "\n";
//            std::cout << a[y_pos][x_pos] << "  "
//                      << a[start_y_shift][start_x_shift] << "\n";

//std::cout << p1 << "  " << p2 << "\n";



//std::ostringstream contents;
//contents << in_file.rdbuf();
//std::string s {contents.str()};
//std::cout << "\n\n";
