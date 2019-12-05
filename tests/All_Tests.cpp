#include "catch.hpp"

#include "Factory.hpp"
#include "Day01.hpp"
#include "Day02.hpp"
#include "Day03.hpp"

using namespace aoc2019;
using Parts = Day::Parts;

//Day01 tests
TEST_CASE("Day01_Test1_Part1", "[Day01]") {
    auto d{Factory().createDay(1)};
    d->set_data_file("data/2019/day01/day01_1.txt");
    d->calculate_part1();
    REQUIRE(d->get_result(Parts::PARTONE) == "34241");
}

TEST_CASE("Day01_Test2_Part1", "[Day01]") {
    auto d{Factory().createDay(1)};
    d->set_data_file("data/2019/day01/day01_2.txt");
    d->calculate_part1();
    REQUIRE(d->get_result(Parts::PARTONE) == "34239");
}

TEST_CASE("Day01_Test3_Part1", "[Day01]") {
    auto d{Factory().createDay(1)};
    d->set_data_file("data/2019/day01/day01_3.txt");
    d->calculate_part1();
    REQUIRE(d->get_result(Parts::PARTONE) == "3159380");
}

TEST_CASE("Day01_Test1_Part2", "[Day01]") {
        auto d{Factory().createDay(1)};
        d->set_data_file("data/2019/day01/day01_1.txt");
        d->calculate_part2();
        REQUIRE(d->get_result(Parts::PARTTWO) == "51316");
}

TEST_CASE("Day01_Test2_Part2", "[Day01]") {
    auto d{Factory().createDay(1)};
    d->set_data_file("data/2019/day01/day01_2.txt");
    d->calculate_part2();
    REQUIRE(d->get_result(Parts::PARTTWO) == "51314");
}

TEST_CASE("Day01_Test3_Part2", "[Day01]") {
    auto d{Factory().createDay(1)};
    d->set_data_file("data/2019/day01/day01_3.txt");
    d->calculate_part2();
    REQUIRE(d->get_result(Parts::PARTTWO) == "4736213");
}
//end Day01 tests


//Day03 tests
TEST_CASE("Day03_Test1_Part1", "[Day03]") {
    auto d{Factory().createDay(3)};
    d->set_data_file("data/2019/day03/day03_1.txt");
    d->calculate_all();
    REQUIRE(d->get_result(Parts::PARTONE) == "6");
}

TEST_CASE("Day03_Test2_Part1", "[Day03]") {
    auto d{Factory().createDay(3)};
    d->set_data_file("data/2019/day03/day03_2.txt");
    d->calculate_all();
    REQUIRE(d->get_result(Parts::PARTONE) == "159");
}

TEST_CASE("Day03_Test3_Part1", "[Day03]") {
    auto d{Factory().createDay(3)};
    d->set_data_file("data/2019/day03/day03_3.txt");
    d->calculate_all();
    REQUIRE(d->get_result(Parts::PARTONE) == "135");
}
//end Day03 tests