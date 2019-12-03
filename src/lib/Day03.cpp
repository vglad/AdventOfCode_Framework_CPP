#include <sstream>
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <memory>
#include <string>
#include <array>

#include "Precompiled.hpp"
#include "Day03.hpp"

namespace aoc2019 {
    using namespace Helper;

    Day03::Day03() = default;
    Day03::Day03(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }
    Day03::~Day03() = default;


    void Day03::draw_step (int64_t x_pos, int64_t y_pos, int8_t comparator) {
        if (map[y_pos][x_pos] == comparator && y_pos != 0 && x_pos != 0) {
            map[y_pos][x_pos] = comparator + 1;
        }
    }


    void Day03::create_wire_path (const std::vector<std::string> &wire,
                                  int64_t y_pos, int64_t x_pos, int8_t comparator)
    {
        for (const auto & e : wire) {
            const std::string direction{e.substr(0, 1)};
            int64_t path = stoi(e.substr(1));
            while (path > 0) {
                if (direction == "R") {
                    draw_step(x_pos, y_pos, comparator);
                    x_pos += 1;
                } else if (direction == "L") {
                    x_pos -= 1;
                    draw_step(x_pos, y_pos, comparator);
                } else if (direction == "D") {
                    y_pos += 1;
                    draw_step(x_pos, y_pos, comparator);
                } else { //if (direction == "U")
                    y_pos -= 1;
                    draw_step(x_pos, y_pos, comparator);
                }
                path -= 1;
            }
        }
    }

    void Day03::calculate_part1() {
        std::string sw1, sw2;
        const int64_t dimension {200};
        int64_t y_pos = dimension / 2, x_pos = dimension / 2;

        std::ifstream in_file(data_file, std::ios::in | std::ios::binary);
        if (in_file) {
            in_file >> sw1;
            in_file >> sw2;

            std::vector<std::string> w1{tokenize_by_delim<std::vector<std::string>>(sw1, ",")};
            std::vector<std::string> w2{tokenize_by_delim<std::vector<std::string>>(sw2, ",")};
            create_wire_path(w1, y_pos,x_pos, 0);
            create_wire_path(w2, y_pos,x_pos, 1);

            p1_result = "Not calculated yet )).";

        } else {
            p1_result = "Data file not found.";
        }
    }

    void Day03::calculate_part2() {
        p2_result = "32";
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
