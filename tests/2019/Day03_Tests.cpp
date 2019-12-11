#include "catch.hpp"

#include "Factory.hpp"
#include "Day03.hpp"

using namespace AoC;
using Parts = Day::Parts;

TEST_CASE("Day03", "[Day03]") {
    auto d{Factory().createDay(3)};

    SECTION("Test data from day03_1.txt") {
        d->set_data_file("2019/data/day03/day03_1.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "6");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "30");
        }
    }

    SECTION("Test data from day03_2.txt") {
        d->set_data_file("2019/data/day03/day03_2.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "159");
        }
        SECTION("Part2") {
            d->calculate_part2();
            //possible wrong test answer (610) in advent of code
            //with given data
            REQUIRE(d->get_result(Parts::PartTwo) == "726");
        }
    }

    SECTION("Test data from day03_3.txt") {
        d->set_data_file("2019/data/day03/day03_3.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "135");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "410");
        }
    }

    SECTION("Orginal test data from day03_4.txt") {
        d->set_data_file("2019/data/day03/day03_4.txt");
        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PartOne) == "806");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PartTwo) == "66076");
        }
    }
}
