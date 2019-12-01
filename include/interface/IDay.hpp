#pragma once

namespace aoc2018 {

    class IDay {
    public:
        virtual void print_header() noexcept = 0;
        virtual void print_results() noexcept = 0;
        virtual void calculate_part1() = 0;
        virtual void calculate_part2() = 0;

        virtual ~IDay() = default;
    };

}