#pragma once

#include <vector>
#include <iterator>
#include <sstream>        
#include <cstddef>
#include <stdexcept>
#include <cstring>
#include <ostream>

namespace Helper {

template <typename T>
std::vector<T> parse_line_by_whitespace(const std::string& s) {
    std::istringstream iss(s);
    return {std::istream_iterator<T>{iss}, std::istream_iterator<T>{}};
}

//*******************************************************************
//turn an expression into a type
//https://stackoverflow.com/questions/81870/is-it-possible-to-print-a-variables-type-in-standard-c/20170989#20170989
//*******************************************************************
#ifndef _MSC_VER
#  if __cplusplus < 201103
#    define CONSTEXPR11_TN
#    define CONSTEXPR14_TN
#    define NOEXCEPT_TN
#  elif __cplusplus < 201402
#    define CONSTEXPR11_TN constexpr
#    define CONSTEXPR14_TN
#    define NOEXCEPT_TN noexcept
#  else
#    define CONSTEXPR11_TN constexpr
#    define CONSTEXPR14_TN constexpr
#    define NOEXCEPT_TN noexcept
#  endif
#else  // _MSC_VER
#  if _MSC_VER < 1900
#    define CONSTEXPR11_TN
#    define CONSTEXPR14_TN
#    define NOEXCEPT_TN
#  elif _MSC_VER < 2000
#    define CONSTEXPR11_TN constexpr
#    define CONSTEXPR14_TN
#    define NOEXCEPT_TN noexcept
#  else
#    define CONSTEXPR11_TN constexpr
#    define CONSTEXPR14_TN constexpr
#    define NOEXCEPT_TN noexcept
#  endif
#endif  // _MSC_VER

class static_string
{
    const char* const p_;
    const std::size_t sz_;

public:
    typedef const char* const_iterator;

    template <std::size_t N>
    CONSTEXPR11_TN explicit static_string(const char(&a)[N]) NOEXCEPT_TN
        : p_(a)
        , sz_(N-1)
        {}

    CONSTEXPR11_TN static_string(const char* p, std::size_t N) NOEXCEPT_TN
        : p_(p)
        , sz_(N)
        {}

    CONSTEXPR11_TN const char* data() const NOEXCEPT_TN {return p_;}
    CONSTEXPR11_TN std::size_t size() const NOEXCEPT_TN {return sz_;}

    CONSTEXPR11_TN const_iterator begin() const NOEXCEPT_TN {return p_;}
    CONSTEXPR11_TN const_iterator end()   const NOEXCEPT_TN {return p_ + sz_;}

    CONSTEXPR11_TN char operator[](std::size_t n) const
    {
        return n < sz_ ? p_[n] : throw std::out_of_range("static_string");
    }
};

inline
std::ostream&
operator<<(std::ostream& os, static_string const& s)
{
    return os.write(s.data(), s.size());
}

template <typename T>
constexpr auto type_name()
{
    std::string_view name, prefix, suffix;
#ifdef __clang__
    name = __PRETTY_FUNCTION__;
    prefix = "auto type_name() [T = ";
    suffix = "]";
#elif defined(__GNUC__)
    name = __PRETTY_FUNCTION__;
    prefix = "constexpr auto type_name() [with T = ";
    suffix = "]";
#elif defined(_MSC_VER)
    name = __FUNCSIG__;
    prefix = "auto __cdecl type_name<        ";
    suffix = ">(void)";
#endif
    name.remove_prefix(prefix.size());
    name.remove_suffix(suffix.size());
    return name;
}
//end of "turn an expression into a type"
//*******************************************************************


}