#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_SNAP_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_SNAP_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"
#include "../refinement.hpp"


namespace mitama::si {
template<class> struct snap_repr{};
using snap_t = make_synonym_t<snap_repr, decltype(meters * second<-4>)>;

inline constexpr snap_t snap{};
using snap_r = make_refiment_symbol_t<snap_t>;
}

namespace mitama {
template <> struct abbreviation<si::snap_t> { static constexpr char str[] = "m/s^4"; };
}

#endif