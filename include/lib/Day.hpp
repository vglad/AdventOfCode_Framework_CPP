#pragma once

#include <cstdint>
#include <string>
#include <memory>
#include <functional>

#include "IDay.hpp"

namespace aoc2019 {

    class Day : public IDay {
    public:
        Day(uint8_t id_, std::string name_, std::string url_,
            std::string data_file_
        );

        void print_header()  noexcept override;
        void print_results() noexcept override;
        virtual void calculate_part1();
        virtual void calculate_part2();

    protected:
        uint8_t     id{0};
        std::string name;
        std::string url;
        std::string data_file;
        std::string p1_result;
        std::string p2_result;
    };

}