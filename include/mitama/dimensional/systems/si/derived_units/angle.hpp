#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ANGLE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ANGLE_HPP
#include <mitama/dimensional/systems/si/base_dimension/angle.hpp>
#include <mitama/dimensional/units.hpp>
#include <mitama/dimensional/io.hpp>
#include <mitama/dimensional/refinement.hpp>

namespace mitama::systems::si {
using radian_base_unit = base_units<angle, 0>;
using radian_t = typename radian_base_unit::unit_type;
inline constexpr radian_t radian{};
using radian_r = make_refinement_symbol_t<radian_t>;
}

namespace mitama {
template <> struct symbol_<systems::si::angle, 0> { static constexpr char str[] = "rad"; };
}
#endif