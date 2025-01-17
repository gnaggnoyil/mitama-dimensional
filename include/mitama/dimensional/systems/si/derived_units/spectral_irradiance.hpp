#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_SPECTRAL_IRRADIANCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_SPECTRAL_IRRADIANCE_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>
#include "power.hpp"

namespace mitama::systems::si {
template<class> struct spectral_irradiance_synonym{};
using spectral_irradiance_t = make_synonym_t<spectral_irradiance_synonym, decltype(watt / meter<3>)>;

inline constexpr spectral_irradiance_t spectral_irradiance{};
using spectral_irradiance_r = make_refinement_symbol_t<spectral_irradiance_t>;
}

namespace mitama {
template <> struct  abbreviation_<systems::si::spectral_irradiance_t> { static constexpr char str[] = "W/m^3"; };
}

#endif
