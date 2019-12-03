#pragma once

namespace aoc2019 {

    class IDay {
    public:
        virtual void print_header() noexcept = 0;
        virtual void print_results() noexcept = 0;
        virtual ~IDay() = default;
    };

}