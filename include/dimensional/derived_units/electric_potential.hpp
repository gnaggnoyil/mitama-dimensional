#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRIC_POTENTIAL_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRIC_POTENTIAL_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"
#include "../refinement.hpp"


namespace mitama::si {
template<class> struct electric_potential_synonym{};
using electric_potential_t = make_synonym_t<electric_potential_synonym, decltype(kilogram<> * meter<2> * second<-3> * ampere<-1>)>;

#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_VOLTAGE_HPP
inline constexpr electric_potential_t volts{};
using electric_potential_r = make_refinement_symbol_t<electric_potential_t>;
template < std::intmax_t N > 
inline constexpr powered_t<electric_potential_t, N> volt{}; 
#endif
}

#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_VOLTAGE_HPP
namespace mitama {
template <> struct abbreviation<si::electric_potential_t> { static constexpr char str[] = "V"; };
}
#endif

#endif
