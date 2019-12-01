#include "Factory.hpp"

namespace aoc2018 {

    Factory::Factory() = default;
    Factory::~Factory() = default;

    const std::vector<Factory::Data> Factory::info = {
            {"Unknown day number","",""},
            {"Day 01: Chronal Calibration.        ",
                    "https://adventofcode.com/2019/day/1",
                    "day01.txt"},
            {"Day 02: Inventory Management System.",
                    "https://adventofcode.com/2019/day/2",
                    "day02.txt"},
            {"Day 03: No Matter How You Slice It. ",
                    "https://adventofcode.com/2019/day/3",
                    "day03.txt"}
    };

    template<typename DayType>
    std::unique_ptr<DayType> Factory::createDayHelper(uint8_t id) {
        return std::make_unique<DayType>(id, info[id].name, info[id].url,
                                               info[id].input_data_file);
    }

    std::unique_ptr<Day> Factory::createDay(uint8_t id) {
        if (id > 25) id = 0;
        switch (id) {
            case 1: return createDayHelper<Day01>(id);
            case 2: return createDayHelper<Day02>(id);
            case 3: return createDayHelper<Day03>(id);
            default: return createDayHelper<Day>(id);
        }
    }

}