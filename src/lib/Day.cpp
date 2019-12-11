#include <iostream>
#include <utility>

#include "Day.hpp"

namespace AoC {

    Day::Day(int8_t id_, std::string name_, std::string url_,
             std::string data_file_)
        : id        {id_},
          name      {std::move(name_)},
          url       {std::move(url_)},
          data_file {std::move(data_file_)},
          p1_result {"Not implemented yet :("},
          p2_result {"Not implemented yet :("} {
    }

    Day::~Day() = default;

    void Day::print_header() noexcept {
        std::cout << name << "\n" << url  << "\n";
    }

    void Day::print_results() noexcept {
        std::cout << "Part 1 answer: " << p1_result << "\n"
                  << "Part 2 answer: " << p2_result << "\n\n";
    }

    void Day::calculate_all() noexcept {
        try { calculate_part1(); }
        catch (std::exception& e) {
            set_result(Parts::PartOne,
                      "Error during calculations: " + std::string {e.what()});
        }
        try { calculate_part2(); }
        catch (std::exception& e) {
            set_result(Parts::PartTwo,
                      "Error during calculations: " + std::string {e.what()});
        }
    }

    void Day::set_data_file(std::string const& data_file_) noexcept {
        data_file = data_file_;
    }

    auto Day::get_result(Day::Parts part) noexcept -> std::string const&
    {
        return part == Parts::PartOne ? p1_result : p2_result;
    }

    void Day::set_result(Day::Parts part, std::string const& result) noexcept {
        part == Parts::PartOne ? p1_result = result : p2_result = result;
    }

    void Day::calculate_part1() {}
    void Day::calculate_part2() {}

}