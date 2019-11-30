#include "Day01.hpp"

namespace aoc2018 {
    Day01::Day01() {
        set_data();
    }

    int64_t aoc2018::Day01::count_part1() {
        return 0;
    }

    int64_t aoc2018::Day01::count_part2() {
        return 0;
    }

    void aoc2018::Day01::set_data() {
        int64_t i{0}, result{0};
        std::vector<int64_t> v;
        std::ifstream in_file("day01.txt");
        while (in_file >> i) {
            v.emplace_back(i);
        }
        in_file.close();
    }

}