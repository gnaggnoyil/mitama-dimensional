#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_EXPOSURE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_EXPOSURE_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>
#include "electric_charge.hpp"

namespace mitama::systems::si {
template<class> struct exposure_synonym{};
using exposure_t = make_synonym_t<exposure_synonym, decltype(coulomb / kilogram<>)>;

inline constexpr exposure_t exposure{};
using exposure_r = make_refinement_symbol_t<exposure_t>;
}

namespace mitama {
template <> struct  abbreviation_<systems::si::exposure_t> { static constexpr char str[] = "C/kg"; };
}
#endif
