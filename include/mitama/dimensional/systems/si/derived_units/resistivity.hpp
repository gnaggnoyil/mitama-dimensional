#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_RESISTIVITY_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_RESISTIVITY_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>
#include "resistance.hpp"

namespace mitama::systems::si {
template<class> struct resistivity_synonym{};
using resistivity_t = make_synonym_t<resistivity_synonym, decltype(ohm * meter<>)>;

inline constexpr resistivity_t resistivity{};
using resistivity_r = make_refinement_symbol_t<resistivity_t>;
}

namespace mitama {
template <> struct  abbreviation_<systems::si::resistivity_t> { static constexpr char str[] = "Ω m"; };
}
#endif
