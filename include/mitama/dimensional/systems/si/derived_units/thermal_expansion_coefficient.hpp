#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_THERMAL_EXPANSION_COEFFICIENT_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_THERMAL_EXPANSION_COEFFICIENT_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>


namespace mitama::systems::si {
using thermal_expansion_coefficient_t = reciprocal_t<kelvin_t>;

inline constexpr thermal_expansion_coefficient_t thermal_expansion_coefficient{};
using thermal_expansion_coefficient_r = make_refinement_symbol_t<thermal_expansion_coefficient_t>;
}

#endif
