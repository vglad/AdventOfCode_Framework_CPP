#pragma once

#include <memory>
#include <vector>

#include "Day01.hpp"
#include "Day02.hpp"
#include "Day03.hpp"
#include "Day04.hpp"
#include "Day05.hpp"
#include "Day06.hpp"
#include "Day07.hpp"
#include "Day08.hpp"
#include "Day09.hpp"
#include "Day10.hpp"
#include "Day11.hpp"
#include "Day12.hpp"
#include "Day13.hpp"
#include "Day14.hpp"
#include "Day15.hpp"
#include "Day16.hpp"
#include "Day17.hpp"
#include "Day18.hpp"
#include "Day19.hpp"
#include "Day20.hpp"
#include "Day21.hpp"
#include "Day22.hpp"
#include "Day23.hpp"
#include "Day24.hpp"
#include "Day25.hpp"

namespace AoC {

    class Factory {
    public:
        Factory();
        ~Factory();
        template<typename DAY, uint8_t ID> std::unique_ptr<Day> createDay();
        std::unique_ptr<Day> createDay(uint8_t id);

    private:
        struct Data {
            std::string name, url, data_file;
        };

        static const std::vector<Data> info;
    };

}
