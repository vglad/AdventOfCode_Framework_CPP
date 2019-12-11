#include "Day02.hpp"

#include <fstream>
#include <algorithm>

#include "Precompiled.hpp"

namespace AoC {

    using namespace Helper;

    Day02::Day02(int8_t id, std::string name, std::string url,
                 std::string data_file)
            : Day(id,
                  std::move(name),
                  std::move(url),
                  std::move(data_file)) {}

    Day02::~Day02() = default;

    template<typename Out>
    std::optional<std::unique_ptr<Out>> Day02::parce_data(
            std::string const& data_file_)
    {
        std::optional<std::unique_ptr<Out>> ret{nullptr};
        auto in_file = std::ifstream(data_file_, std::ios::in | std::ios::binary);
        if (in_file) {
            using svData   = std::vector<std::string>;
            auto s         = std::string {};
            in_file >> s;
            auto sv_int_code {tokenize_by_delim<svData>(s, ",")};
            auto contOut {str_to_num<svData, Out>(std::make_unique<svData>(sv_int_code))};
            ret = std::make_optional<std::unique_ptr<Out>>(std::make_unique<Out>(contOut));
        }
        in_file.close();
        return ret;
    }

    auto Day02::fix_intcode(std::unique_ptr<std::vector<int32_t>> int_code)
            -> std::vector<int32_t>
    {
        std::vector<int32_t> &iv = *int_code;
        for (auto i = std::begin(iv); i != std::end(iv); ++i) {
            auto halt = bool{false};
            switch (*i) {
                case 1 : {
                    iv[*(i + 3)] = iv[*(i + 1)] + iv[*(i + 2)];
                    break;
                }
                case 2 : {
                    iv[*(i + 3)] = iv[*(i + 1)] * iv[*(i + 2)];
                    break;
                }
                default: {
                    halt = true;
                }
            }
            if (halt) break;
            i += 3;
        }
        return std::move(iv);
    }

    void Day02::calculate_part1() {
        auto op_data {parce_data<std::vector<int32_t>>(data_file)};
        if (op_data.has_value()) {
            auto p_data {std::make_unique<std::vector<int32_t>>(
                    fix_intcode(std::move(*op_data)))
            };
            set_result(Parts::PartOne, std::to_string(p_data->at(0)));
        } else {
            set_result(Parts::PartOne, "Data file not found.");
        }
    }

    void Day02::calculate_part2() {
        auto op_data {parce_data<std::vector<int32_t>>(data_file)};
        auto noun = int32_t {0};
        auto verb = int32_t {0};
        auto v_size = static_cast<int32_t>(op_data->get()->size());
        if (op_data.has_value()) {
            //op_data.value()->at(1) = noun;
            //op_data.value()->at(2) = verb;
            for (int8_t i = 0; i <100; ++i){
                op_data.value()->at(1) = i;
                for (int8_t j = i; j <100; ++j){
                    op_data.value()->at(2) = j;
                    auto p_data {std::make_unique<std::vector<int32_t>>(
                            fix_intcode(std::move(*op_data)))
                    };
                    if (p_data->at(0) == 19690720) {
                        noun = i;
                        verb = j;
                    }
                    if (j >= v_size) break;
                }
                if (i >= v_size) break;
            }
            //auto p_data {std::make_unique<std::vector<int32_t>>(
            //        fix_intcode(std::move(*op_data)))
            //};

            set_result(Parts::PartTwo, std::to_string(100 * noun + verb));
        } else {
            set_result(Parts::PartTwo, "Data file not found.");
        }
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