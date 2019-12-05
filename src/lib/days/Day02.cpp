#include "Day02.hpp"

namespace AoC {

    Day02::Day02() = default;
    Day02::Day02(uint8_t id, std::string name, std::string url,
                 std::string data_file)
          : Day(id, std::move(name), std::move(url), std::move(data_file)) {
    }
    Day02::~Day02() = default;

    void Day02::calculate_part1() {
    }

    void Day02::calculate_part2() {
    }

}

/*
 *     //int64_t idx{0};
    //auto it = std::begin(def_v);

    //while (it != end(def_v)) {
    //    for (int8_t i = 0; i < 4; ++i) {
    //        std::cout << def_v[idx + i] << " ";
    //    }
    //    std::cout << "\n";
    //    if (std::distance(it, end(def_v)) > 4) {
    //        it += 4;
    //        idx += 4;

    //    } else {
    //        break;
    //    }
    //}

    //idx = 0;
    //it = std::begin(def_v);
    //while (it != end(def_v)) {
    //                int64_t oppcode = def_v[idx];
    //                if (oppcode == 99) return 0;
    //                int64_t first = def_v[idx + 1];
    //                int64_t second = def_v[idx + 2];
    //                int64_t third = def_v[idx + 3];
    //                if (oppcode == 1) {
    //                    def_v[third] = def_v[first] + def_v[second];
    //                } else if (oppcode == 2) {
    //                    def_v[third] = def_v[first] * def_v[second];
    //                }

    //    idx += 4;
    //    if (std::distance(it, end(def_v)) < 4) it += 4;
    //}
    */