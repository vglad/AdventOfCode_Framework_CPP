#include "Precompiled.hpp"
#include "Days.hpp"

int main() {
    using namespace aoc2018;

    const uint8_t days = 3;
    Days day;
    for (uint8_t i = 0; i < days; ++i) {
        day.print_header(i);
        day.calculate(i);
        day.print_result(i);
        //day.print_footer(i);
    }

    return 0;
}