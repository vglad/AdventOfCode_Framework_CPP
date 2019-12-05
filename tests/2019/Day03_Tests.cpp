#include "catch.hpp"

#include "Factory.hpp"
#include "Day03.hpp"

using namespace AoC;
using Parts = Day::Parts;

TEST_CASE("Day03", "[Day03]") {
    auto d{Factory().createDay(3)};

    SECTION("Example data test 1") {
        d->set_data_file("2019/data/day03/day03_1.txt");

        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PARTONE) == "6");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PARTTWO) == "");
        }
    }

    SECTION("Example data test 2") {
        d->set_data_file("2019/data/day03/day03_2.txt");

        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PARTONE) == "159");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PARTTWO) == "");
        }
    }

    SECTION("Example data test 3") {
        d->set_data_file("2019/data/day03/day03_3.txt");

        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PARTONE) == "135");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PARTTWO) == "");
        }
    }

    SECTION("Original data test 3") {
        d->set_data_file("2019/data/day03/day03_4.txt");

        SECTION("Part1") {
            d->calculate_part1();
            REQUIRE(d->get_result(Parts::PARTONE) == "806");
        }
        SECTION("Part2") {
            d->calculate_part2();
            REQUIRE(d->get_result(Parts::PARTTWO) == "");
        }
    }
}
