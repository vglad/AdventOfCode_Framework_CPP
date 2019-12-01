#include "Days.hpp"

namespace aoc2018 {

    Days::Days()    = default;
    Days::~Days()   = default;

    void Days::print_header(uint8_t day) noexcept {
        std::cout << info[day].name << "  "
                  << info[day].url  << "\n";
    }

    void Days::print_result(uint8_t day) noexcept {
        std::cout << "Part 1 answer: " << answers[day].part1 << "\n"
                  << "Part 2 answer: " << answers[day].part2 << "\n\n";
    }

    void Days::calculate(uint8_t day) {

    }

}
