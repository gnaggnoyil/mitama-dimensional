#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_THERMAL_RESISTANCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_THERMAL_RESISTANCE_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"
#include "power.hpp"


namespace mitama::si {
template<class> struct thermal_resistance_repr{};
using thermal_resistance_t = make_synonym_t<thermal_resistance_repr, decltype(kelvin<> / watt)>;

inline constexpr thermal_resistance_t thermal_resistance{};
}

namespace mitama {
template <> struct abbreviation<si::thermal_resistance_t> { static constexpr char str[] = "K/W"; };
}
#endif
