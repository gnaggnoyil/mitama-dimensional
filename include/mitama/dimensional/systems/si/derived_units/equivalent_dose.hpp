#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_DOSE_EQUIVALENCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_DOSE_EQUIVALENCE_HPP
#include <mitama/dimensional/systems/si/base_dimension/equivalent_dose.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>

namespace mitama::systems::si {
using sievert_base_unit = base_units<equivalent_dose, 0>;
using sievert_t = typename sievert_base_unit::unit_type;
inline constexpr sievert_t sievert{};
using equivalent_dose_r = make_refinement_symbol_t<sievert_t>;
}

namespace mitama {
template <> struct symbol_<systems::si::equivalent_dose, 0> { static constexpr char str[] = "Sv"; };
}
#endif