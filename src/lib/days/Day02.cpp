#include "Day02.hpp"

#include <fstream>
#include <algorithm>

#include "Precompiled.hpp"

namespace AoC {

    using namespace Helper;

    //experimenting with code readability :))
    using std::unique_ptr, std::vector, std::string, std::optional, std::move;
    using std::make_unique, std::make_optional, std::ifstream, std::to_string;
    using std::begin, std::end, std::ios, std::cout;
    //

    Day02::Day02(int8_t id, string name, string url, string data_file)
        : Day(id, move(name), move(url), move(data_file)) {
    }
    Day02::~Day02() = default;

    template<typename Out>
    optional<unique_ptr<Out>> Day02::parce_data(string const& data_file_) {
        if (auto in_file = ifstream(data_file_, ios::in | ios::binary);
            in_file)
        {
            auto s = string {};
            in_file >> s;
            in_file.close();
            using data_t     = vector<string>;
            auto  s_opt_code = tokenize_by_delim<data_t>(s, ",");
            auto  i_opt_code = str_to_num<data_t, Out>(make_unique<data_t>(s_opt_code));
            return {make_optional<unique_ptr<Out>>(make_unique<Out>(i_opt_code))};
        }
        return {};
    }

    auto Day02::fix_int_code(unique_ptr<vector<int32_t>> int_code)
        -> std::unique_ptr<std::vector<int32_t>>
    {
        auto& iv = *int_code;
        for (auto i = begin(iv); i != end(iv); ++i) {
            switch (*i) {
                case 1 : {
                    iv[*(i + 3)] = iv[*(i + 1)] + iv[*(i + 2)];
                    break;
                }
                case 2 : {
                    iv[*(i + 3)] = iv[*(i + 1)] * iv[*(i + 2)];
                    break;
                }
                case 99 : {
                    return make_unique<vector<int32_t>>(iv);
                }
                default: {
                    cout << "Error: Unknown opp code.\n";
                    return make_unique<vector<int32_t>>(iv);
                }
            }
            i += 3;
        }
        return make_unique<vector<int32_t>>(iv);
    }

    void Day02::calculate_part1() {
        using data_t = vector<int32_t>;
        auto  o_data = parce_data<data_t>(data_file);
        if (o_data.has_value()) {
            auto p_data = fix_int_code(move(*o_data));
            set_result(Parts::PartOne, to_string((*p_data)[0]));
        } else {
            set_result(Parts::PartOne, "Data file not found.");
        }
    }

    void Day02::calculate_part2() {
        using data_t  = vector<int32_t>;
        auto  op_data = parce_data<data_t>(data_file);
        auto  noun    = int32_t {0};
        auto  verb    = int32_t {0};
        auto  v_size  = static_cast<int32_t>(op_data->get()->size());
        if (op_data.has_value()) {
            for (int8_t i = 0; i < 100; ++i){
                bool found = false;
                for (int8_t j = 0; j < 100; ++j){
                    auto p_data = make_unique<data_t>(*op_data.value());
                    (*p_data)[1] = i;
                    (*p_data)[2] = j;
                    p_data = fix_int_code(move(p_data));
                    if ((*p_data)[0] == 19690720) {
                        noun  = i;
                        verb  = j;
                        found = true;
                        break;
                    }
                    if (j == v_size) break;
                }
                if (i == v_size || found) break;
            }
            set_result(Parts::PartTwo, to_string(100 * noun + verb));
        } else {
            set_result(Parts::PartTwo, "Data file not found.");
        }
    }
}