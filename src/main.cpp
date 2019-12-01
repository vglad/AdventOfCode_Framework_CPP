#include <memory>

#include "Day.hpp"
#include "Factory.hpp"

int main() {
    using namespace aoc2018;

    const uint8_t total_days = 3;
    for (auto [factory, day_id] = std::pair(Factory{}, 1); day_id <= total_days; ++day_id) {
        std::unique_ptr<Day> day{factory.createDay(day_id)};
        day->calculate_part1();
        day->calculate_part2();
        day->print_header();
        day->print_results();
    }

    return 0;
}