#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>

namespace aoc2018 {


    class Day01 {
    public:
        Day01();

        int64_t count_part1();
        int64_t count_part2();

        void print_result();

    private:
        void set_data();
        const std::string name;//  = "Day 01: Chronal Calibration.";
        const std::string url; //   = "URL   : https://adventofcode.com/2018/day/1";
        const std::vector<int8_t> v;
    };

}

