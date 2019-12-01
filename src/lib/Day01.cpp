#include "Day01.hpp"

#include <utility>
#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>

namespace aoc2018 {

    Day01::Day01() = default;;
    Day01::Day01(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }
    Day01::~Day01() = default;

    void Day01::calculate_part1() {
        p1_result = "11";
    }

    void Day01::calculate_part2() {
        p2_result = "12";
    }

}

//    void Day01::set_data() {
//        int64_t i{0}, result{0};
//        std::vector<int64_t> v;
//        std::ifstream in_file("day01.txt");
//        while (in_file >> i) {
//            v.emplace_back(i);
//        }
//        in_file.close();
//    }
