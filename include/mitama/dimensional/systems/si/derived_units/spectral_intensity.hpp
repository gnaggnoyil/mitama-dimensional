#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_SPECTRAL_INTENSITY_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_SPECTRAL_INTENSITY_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>
#include "power.hpp"
#include "solid_angle.hpp"

namespace mitama::systems::si {
template<class> struct spectral_intensity_synonym{};
using spectral_intensity_t = make_synonym_t<spectral_intensity_synonym, decltype( watt / steradian * meter<-1> )>;

inline constexpr spectral_intensity_t spectral_intensity{};
using spectral_intensity_r = make_refinement_symbol_t<spectral_intensity_t>;
}

namespace mitama {
template <> struct  abbreviation_<systems::si::spectral_intensity_t> { static constexpr char str[] = "W/(sr m)"; };
}
#endif
