#include "catch.hpp"

#include "Factory.hpp"
#include "Day02.hpp"

using namespace AoC;
using Parts = Day::Parts;

TEST_CASE("Day02", "[Day02]") {
    auto d{Factory().createDay(2)};
    SECTION("Test data from day02_1.txt") {
        d->set_data_file("2019/data/day02/day02_1.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "2");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "");
        }
    }

    SECTION("Test data from day02_2.txt") {
        d->set_data_file("2019/data/day02/day02_2.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "30");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "");
        }
    }

    SECTION("Test data from day02_3.txt") {
        d->set_data_file("2019/data/day02/day02_3.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "3500");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "");
        }
    }


    SECTION("Original test data from day02_4.txt") {
        d->set_data_file("2019/data/day02/day02_4.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "3101878");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "");
        }
    }
}