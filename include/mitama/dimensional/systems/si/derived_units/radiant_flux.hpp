#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_RADIANT_FLUX_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_RADIANT_FLUX_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>


namespace mitama::systems::si {
template<class> struct radiant_flux_synonym{};
using radiant_flux_t = make_synonym_t<radiant_flux_synonym, decltype(kilogram<> * meter<2> * second<-3>)>;

#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_POWER_HPP
inline constexpr radiant_flux_t watt{};
using radiant_flux_r = make_refinement_symbol_t<radiant_flux_t>;
#endif
}

#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_POWER_HPP
namespace mitama {
template <> struct  abbreviation_<systems::si::radiant_flux_t> { static constexpr char str[] = "W"; };
}
#endif

#endif
