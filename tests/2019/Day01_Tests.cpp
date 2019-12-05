#include "catch.hpp"

#include "Factory.hpp"
#include "Day01.hpp"

using namespace AoC;
using Parts = Day::Parts;

TEST_CASE("Day01", "[Day01]") {
    auto d{Factory().createDay(1)};

    SECTION("Example data test 1") {
        d->set_data_file("2019/data/day01/day01_1.txt");

        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PARTONE) == "34241");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PARTTWO) == "51316");
        }

    }

    SECTION("Example data test 2") {
        d->set_data_file("2019/data/day01/day01_2.txt");

        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PARTONE) == "34239");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PARTTWO) == "51314");
        }
    }

    SECTION("Original data test") {
        d->set_data_file("2019/data/day01/day01_3.txt");

        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PARTONE) == "3159380");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PARTTWO) == "4736213");
        }
    }
}