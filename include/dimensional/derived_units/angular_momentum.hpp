#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ANGULAR_MOMENTUM_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ANGULAR_MOMENTUM_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"

namespace mitama::si {
using angular_momentum_t = decltype(meter<2> * kilogram<> * second<-1>);

inline constexpr angular_momentum_t angular_momentum{};
}

namespace mitama {
template <> struct abbreviation<si::angular_momentum_t> { static constexpr char str[] = "N·m·s"; };
}
#endif
