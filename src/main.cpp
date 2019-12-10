#include <memory>

#include "Day.hpp"
#include "Factory.hpp"

int main() {
    using namespace AoC;

    for (auto [factory, total_days, day_id] = std::tuple(Factory{}, 25, 1);
         day_id <= total_days; ++day_id)
    {
        std::unique_ptr<Day> day{factory.createDay(day_id)};
        day->print_header();
        day->calculate_all();
        day->print_results();
    }

    return 0;
}