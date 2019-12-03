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

    Day03::Day03(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }




    void Day03::calculate_part1() {
        int64_t i{0}, result{0};
        std::string sw1, sw2;

        //std::array<int, 1000> coord {0};
        const int64_t dimension {200};
        int64_t a[dimension][dimension] = {0};
        int8_t start_y_shift = dimension / 2;
        int8_t start_x_shift = dimension / 2;
        int64_t y_pos = start_y_shift;
        int64_t x_pos = start_x_shift;

        //std::cout << a[0][3] << "  " << a[4][90] << "\n";
        //std::pair<int64_t, int64_t> m{0, 0};
        //std::unordered_set<std::pair<int64_t, int64_t>> coor;// = { {1,0}, {2,0} };

        std::ifstream in_file(data_file, std::ios::in | std::ios::binary);

        if (in_file) {
            in_file >> sw1;
            in_file >> sw2;
            std::vector<std::string> w1{tokenize_by_delim<std::vector<std::string>>(
                                        sw1, ",")};
            std::vector<std::string> w2{tokenize_by_delim<std::vector<std::string>>(
                                        sw2, ",")};


            for (const auto & e : w1) {
                const std::string direction{e.substr(0, 1)};
                int64_t path = stoi(e.substr(1));
                while (path > 0) {
                    if (direction == "R") {
                        a[y_pos][x_pos] += 1;
                        x_pos += 1;
                    } else if (direction == "L") {
                        x_pos -= 1;
                        a[y_pos][x_pos] += 1;
                    } else if (direction == "D") {
                        y_pos += 1;
                        a[y_pos][x_pos] += 1;
                    } else if (direction == "U") {
                        y_pos -= 1;
                        a[y_pos][x_pos] += 1;
                    }
                    path -= 1;
                }
            }

            //std::cout << direction << "  " << path << "\n";
//            std::cout << a[y_pos][x_pos] << "  "
//                      << a[start_y_shift][start_x_shift] << "\n";


            const int8_t v_size = w1.size();
            for (auto pair = 0; pair < v_size; ++pair) {
                std::string p1 = w1[pair];
                std::string p2 = w2[pair];
                //std::cout << p1 << "  " << p2 << "\n";

            }

            while (in_file >> i) {

            }

            in_file.close();
            p1_result =   std::to_string(w1.size())
                        + "  "
                        + std::to_string(w2.size());
        } else {
            p1_result = "Data file not found.";
        }
    }

    void Day03::calculate_part2() {
        p2_result = "32";
    }

}


//std::ostringstream contents;
//contents << in_file.rdbuf();
//std::string s {contents.str()};
//std::cout << "\n\n";
