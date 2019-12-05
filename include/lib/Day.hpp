#pragma once

#include <cstdint>
#include <string>
#include <memory>
#include <functional>

#include "IDay.hpp"

namespace AoC {

    class Day : public IDay {
    protected:
        uint8_t     id{0};
        std::string name;
        std::string url;
        std::string data_file;
        std::string p1_result;
        std::string p2_result;
    public:
        Day();
        Day(uint8_t id_, std::string name_, std::string url_,
            std::string data_file_
        );
        ~Day() override;
        enum class Parts { PARTONE, PARTTWO };

        void print_header()  noexcept override;
        void print_results() noexcept override;
        void calculate_all() noexcept override;
        void calculate_part1() override;
        void calculate_part2() override;

        void set_data_file(const std::string & data_file_) noexcept;
        auto get_result(Parts part) noexcept -> const std::string&;
        void set_result(Parts part, const std::string & result) noexcept;
    };

}