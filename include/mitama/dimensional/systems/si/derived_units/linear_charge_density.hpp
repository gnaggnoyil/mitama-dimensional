#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_LINEAR_CHARGE_DENSITY_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_LINEAR_CHARGE_DENSITY_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>
#include "electric_charge.hpp"

namespace mitama::systems::si {
template<class> struct linear_charge_density_synonym{};
using linear_charge_density_t = make_synonym_t<linear_charge_density_synonym, decltype(coulomb / meter<>)>;

inline constexpr linear_charge_density_t linear_charge_density{};
using linear_charge_density_r = make_refinement_symbol_t<linear_charge_density_t>;
}

namespace mitama {
template <> struct  abbreviation_<systems::si::linear_charge_density_t> { static constexpr char str[] = "C/m"; };
}
#endif
