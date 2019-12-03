#include <iostream>
#include <utility>

#include "Day.hpp"

namespace aoc2019 {

    Day::Day() = default;
    Day::Day(uint8_t id_, std::string name_, std::string url_,
             std::string data_file_)
        : id{id_}, name{std::move(name_)}, url{std::move(url_)},
          data_file{std::move(data_file_)},
          p1_result{"Calculation not implemented."},
          p2_result{"Calculation not implemented."} {
    }

    void Day::print_header() noexcept {
        std::cout << name << "\n" << url  << "\n";
    }

    void Day::print_results() noexcept {
        std::cout << "Part 1 answer: " << p1_result << "\n"
                  << "Part 2 answer: " << p2_result << "\n\n";
    }

    void Day::calculate_part1() {}
    void Day::calculate_part2() {}

}
