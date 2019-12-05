#pragma once

#include <memory>
#include <vector>

#include "Day01.hpp"
#include "Day02.hpp"
#include "Day03.hpp"

namespace aoc2019 {

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
