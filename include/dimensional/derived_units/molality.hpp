#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_MOLALITY_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_MOLALITY_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"


namespace mitama::si {
using molality_t = decltype(mol<> / kilogram<>);

inline constexpr molality_t molality{};
}

namespace mitama {
template <> struct abbreviation<si::molality_t> { static constexpr char str[] = "mol/kg"; };
}
#endif
