#include <memory>

#include "Day.hpp"
#include "Factory.hpp"

int main() {
    using namespace aoc2019;


    for (auto [factory, total_days, day_id] = std::tuple(Factory{}, 3, 1);
         day_id <= total_days; ++day_id)
    {
        std::unique_ptr<Day> day{factory.createDay(day_id)};
        day->calculate_part1();
        day->calculate_part2();
        day->print_header();
        day->print_results();
    }

    return 0;
}