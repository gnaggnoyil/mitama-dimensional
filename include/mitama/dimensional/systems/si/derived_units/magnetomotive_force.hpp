#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_MAGNETOMOTIVE_FORCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_MAGNETOMOTIVE_FORCE_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>
#include "angle.hpp"

namespace mitama::systems::si {
template<class> struct magnetomotive_force_synonym{};
using magnetomotive_force_t = make_synonym_t<magnetomotive_force_synonym, decltype(ampere<> * radian)>;

inline constexpr magnetomotive_force_t magnetomotive_force{};
using magnetomotive_force_r = make_refinement_symbol_t<magnetomotive_force_t>;
}

namespace mitama {
template <> struct  abbreviation_<systems::si::magnetomotive_force_t> { static constexpr char str[] = "A rad"; };
}

#endif
