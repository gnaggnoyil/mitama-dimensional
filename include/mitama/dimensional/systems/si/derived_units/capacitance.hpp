#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_CAPACITANCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_CAPACITANCE_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>


namespace mitama::systems::si {
template<class> struct capacitance_synonym{};
using capacitance_t = make_synonym_t<capacitance_synonym, decltype(kilogram<-1> * meter<-2> * second<4> * ampere<2>)>;

inline constexpr capacitance_t farad{};
using capacitance_r = make_refinement_symbol_t<capacitance_t>;
}

namespace mitama {
template <> struct  abbreviation_<systems::si::capacitance_t> { static constexpr char str[] = "F"; };
}
#endif
