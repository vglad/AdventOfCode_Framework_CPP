#pragma once

#include "Day.hpp"

namespace AoC {

    class Day02 : public Day {
      public:
        Day02() = delete;
        explicit Day02( int8_t          id,
                        std::string     name,
                        std::string     url,
                        std::string     data_file);
        ~Day02() override;

        void calculate_part1() override;
        void calculate_part2() override;

      private:
        template <typename Out>
        std::optional<std::unique_ptr<Out>> parce_data(std::string const& data_file_);

        auto fix_intcode(std::unique_ptr<std::vector<int32_t>> int_code)
        -> std::vector<int32_t>;

    };

}