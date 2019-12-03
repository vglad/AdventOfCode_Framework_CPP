#include "Factory.hpp"

namespace aoc2019 {

    const std::vector<Factory::Data> Factory::info = {
            {"Unknown day number","",""},
            {"Day 1: The Tyranny of the Rocket Equation.",
                    "https://adventofcode.com/2019/day/1",
                    "data/2019day01.txt"},
            {"Day 2: 1202 Program Alarm.",
                    "https://adventofcode.com/2019/day/2",
                    "data/2019day02.txt"},
            {"Day 03: .",
                    "https://adventofcode.com/2019/day/3",
                    "data/2019day03.txt"}
    };

    template<typename DAY, uint8_t ID> std::unique_ptr<Day> Factory::createDay() {
        return std::make_unique<DAY>(ID, info[ID].name, info[ID].url,
                                     info[ID].input_data_file); }

    std::unique_ptr<Day> Factory::createDay(uint8_t id) {
        switch (id) {
            case 1: return createDay<Day01, 1>();
            case 2: return createDay<Day02, 2>();
            case 3: return createDay<Day03, 3>();
            default:return createDay<Day,   0>();
        }
    }

}