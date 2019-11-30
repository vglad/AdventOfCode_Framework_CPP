#pragma once

#include <iostream>
#include <vector>
#include <cstdint>

namespace aoc2018 {

    class Days {
    public:
        Days();
        ~Days();

        void print_header(uint8_t day) noexcept;
        void calculate(uint8_t day);
        void print_result(uint8_t day) noexcept;

    private:
        struct Data {
            std::string name;
            std::string url;
            std::string input_file;
        };

        struct Results {
            std::string part1;
            std::string part2;
        };

        const std::vector<Data> info = {
             {"Day 01: Chronal Calibration.        ",
             "https://adventofcode.com/2018/day/1","day01.txt"},

             {"Day 02: Inventory Management System.",
             "https://adventofcode.com/2018/day/2","day02.txt"},

             {"Day 03: No Matter How You Slice It. ",
             "https://adventofcode.com/2018/day/3","day03.txt"}
        };

        std::vector<Results> answers = {
                {{"11"}, {"12"}},
                {{"21"}, {"22"}},
                {{"31"}, {"32"}}
        };

    };

}