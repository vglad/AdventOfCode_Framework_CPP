#include <iostream>
#include <utility>

#include "Day.hpp"

namespace AoC {

    Day::Day() = default;
    Day::Day(uint8_t id_, std::string name_, std::string url_,
             std::string data_file_)
        : id{id_}, name{std::move(name_)}, url{std::move(url_)},
          data_file{std::move(data_file_)},
          p1_result{"Not implemented yet :("},
          p2_result{"Not implemented yet :("} {
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
            std::string info = e.what();
            set_result(Parts::PARTONE, "Error during calculations: " + info);
        }
        try { calculate_part2(); }
        catch (std::exception& e) {
            std::string info = e.what();
            set_result(Parts::PARTTWO, "Error during calculations: " + info);
        }
    }

    void Day::set_data_file(const std::string &data_file_) noexcept {
        data_file = data_file_;
    }

    const std::string& Day::get_result(Day::Parts part) noexcept {
        return part == Parts::PARTONE ? p1_result : p2_result;
    }

    void Day::set_result(Day::Parts part, const std::string &result) noexcept {
        part == Parts::PARTONE ? p1_result = result : p2_result = result;
    }

    void Day::calculate_part1() {}
    void Day::calculate_part2() {}

}