#ifndef MITAMA_DIMENSIONAL_SI_UNITS_CANDELA_HPP
#define MITAMA_DIMENSIONAL_SI_UNITS_CANDELA_HPP
#include <mitama/dimensional/systems/si/base_units/fwd/si_base_units.hpp>
#include <mitama/dimensional/systems/si/prefix.hpp>
#include <mitama/dimensional/units.hpp>

namespace mitama::systems::si {

using candela_t = typename candela_base_unit::unit_type_with_system<::mitama::systems::si::system>;

template < std::intmax_t N = 1 >
using candela_ = powered_t<candela_t, N>;

inline constexpr candela_t candelas{};

template < std::intmax_t N = 1 > inline constexpr powered_t<candela_t, N> candela{};

}

#endif
