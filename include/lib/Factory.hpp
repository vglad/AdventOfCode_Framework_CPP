#pragma once

#include <memory>
#include <vector>

#include "Day01.hpp"
#include "Day02.hpp"
#include "Day03.hpp"

namespace aoc2018 {

    class Factory {
    public:
        Factory();
        ~Factory();

        template<typename DayType>
        std::unique_ptr<DayType> createDayHelper(uint8_t id);
        std::unique_ptr<Day> createDay(uint8_t id);
    private:
        struct Data {
            std::string name, url, input_data_file;
        };

        static const std::vector<Data> info;
    };

}
