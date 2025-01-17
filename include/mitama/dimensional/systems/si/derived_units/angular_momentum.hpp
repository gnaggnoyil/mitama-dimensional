#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ANGULAR_MOMENTUM_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ANGULAR_MOMENTUM_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>

namespace mitama::systems::si {
template<class> struct angular_momentum_synonym{};
using angular_momentum_t = make_synonym_t<angular_momentum_synonym, decltype(meter<2> * kilogram<> * second<-1>)>;

inline constexpr angular_momentum_t angular_momentum{};
using angular_momentum_r = make_refinement_symbol_t<angular_momentum_t>;
}

namespace mitama {
template <> struct  abbreviation_<systems::si::angular_momentum_t> { static constexpr char str[] = "N m s"; };
}
#endif
