#include "catch.hpp"

#include "Factory.hpp"
#include "Day01.hpp"

using namespace AoC;
using Parts = Day::Parts;

TEST_CASE("Day01", "[Day01]") {
    auto d{Factory().createDay(1)};
    SECTION("Test data from day01_1.txt") {
        d->set_data_file("2019/data/day01/day01_1.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "34241");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "51316");
        }
    }

    SECTION("Test data from day01_2.txt") {
        d->set_data_file("2019/data/day01/day01_2.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "34239");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "51314");
        }
    }

    SECTION("Original test data from day01_3.txt") {
        d->set_data_file("2019/data/day01/day01_3.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "3159380");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "4736213");
        }
    }
}