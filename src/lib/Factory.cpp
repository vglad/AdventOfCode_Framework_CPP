#include "Factory.hpp"

namespace AoC {

    Factory::Factory() = default;
    Factory::~Factory() = default;

    const std::vector<Factory::Data> Factory::info = {
            {"Unknown day number","",""},
            {"Day 1: The Tyranny of the Rocket Equation.",
                    "https://adventofcode.com/2019/day/1",
                    "data/2019/day01.txt"},
            {"Day 2: 1202 Program Alarm.",
                    "https://adventofcode.com/2019/day/2",
                    "data/2019/day02.txt"},
            {"Day 3: Crossed Wires.",
                    "https://adventofcode.com/2019/day/3",
                    "data/2019/day03.txt"},
            {"Day 4: Secure Container.",
                    "https://adventofcode.com/2019/day/4",
                    "data/2019/day04.txt"},
            {"Day 5: Sunny with a Chance of Asteroids.",
                    "https://adventofcode.com/2019/day/5",
                    "data/2019/day05.txt"},
            {"Day 6: ....",
                    "https://adventofcode.com/2019/day/6",
                    "data/2019/day06.txt"},
            {"Day 7: ....",
                    "https://adventofcode.com/2019/day/7",
                    "data/2019/day07.txt"},
            {"Day 8: ....",
                    "https://adventofcode.com/2019/day/8",
                    "data/2019/day08.txt"},
            {"Day 9: ....",
                    "https://adventofcode.com/2019/day/9",
                    "data/2019/day09.txt"},
            {"Day 10: ....",
                    "https://adventofcode.com/2019/day/10",
                    "data/2019/day10.txt"},
            {"Day 11: ....",
                    "https://adventofcode.com/2019/day/11",
                    "data/2019/day11.txt"},
            {"Day 12: ....",
                    "https://adventofcode.com/2019/day/12",
                    "data/2019/day12.txt"},
            {"Day 13: ....",
                    "https://adventofcode.com/2019/day/13",
                    "data/2019/day13.txt"},
            {"Day 14: ....",
                    "https://adventofcode.com/2019/day/14",
                    "data/2019/day14.txt"},
            {"Day 15: ....",
                    "https://adventofcode.com/2019/day/15",
                    "data/2019/day15.txt"},
            {"Day 16: ....",
                    "https://adventofcode.com/2019/day/16",
                    "data/2019/day16.txt"},
            {"Day 17: ....",
                    "https://adventofcode.com/2019/day/17",
                    "data/2019/day17.txt"},
            {"Day 18: ....",
                    "https://adventofcode.com/2019/day/18",
                    "data/2019/day18.txt"},
            {"Day 19: ....",
                    "https://adventofcode.com/2019/day/19",
                    "data/2019/day19.txt"},
            {"Day 20: ....",
                    "https://adventofcode.com/2019/day/20",
                    "data/2019/day20.txt"},
            {"Day 21: ....",
                    "https://adventofcode.com/2019/day/21",
                    "data/2019/day21.txt"},
            {"Day 22: ....",
                    "https://adventofcode.com/2019/day/22",
                    "data/2019/day22.txt"},
            {"Day 23: ....",
                    "https://adventofcode.com/2019/day/23",
                    "data/2019/day23.txt"},
            {"Day 24: ....",
                    "https://adventofcode.com/2019/day/24",
                    "data/2019/day24.txt"},
            {"Day 25: ....",
                    "https://adventofcode.com/2019/day/25",
                    "data/2019/day25.txt"}
    };

    template<typename DAY, int8_t Id>
    std::unique_ptr<Day> Factory::createDay() {
        return std::make_unique<DAY>(
                Id, info[Id].name, info[Id].url, info[Id].data_file);
    }

    std::unique_ptr<Day> Factory::createDay(int8_t id) {
        switch (id) {
            case 1:  return createDay<Day01, 1>();
            case 2:  return createDay<Day02, 2>();
            case 3:  return createDay<Day03, 3>();
            case 4:  return createDay<Day04, 4>();
            case 5:  return createDay<Day05, 5>();
            case 6:  return createDay<Day06, 6>();
            case 7:  return createDay<Day07, 7>();
            case 8:  return createDay<Day08, 8>();
            case 9:  return createDay<Day09, 9>();
            case 10: return createDay<Day10, 10>();
            case 11: return createDay<Day11, 11>();
            case 12: return createDay<Day12, 12>();
            case 13: return createDay<Day13, 13>();
            case 14: return createDay<Day14, 14>();
            case 15: return createDay<Day15, 15>();
            case 16: return createDay<Day16, 16>();
            case 17: return createDay<Day17, 17>();
            case 18: return createDay<Day18, 18>();
            case 19: return createDay<Day19, 19>();
            case 20: return createDay<Day20, 20>();
            case 21: return createDay<Day21, 21>();
            case 22: return createDay<Day22, 22>();
            case 23: return createDay<Day23, 23>();
            case 24: return createDay<Day24, 24>();
            case 25: return createDay<Day25, 25>();
            default: return createDay<Day,   0>();
        }
    }

}