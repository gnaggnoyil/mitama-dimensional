#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/systems/si/derived_units/linear_mass_density.hpp>
#include <mitama/dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::systems::si;

TEST_CASE("linear_mass_density refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::accepts<systems::si::linear_mass_density_r> |= quantity_t<systems::si::linear_mass_density_t>{}) == quantity_t<systems::si::linear_mass_density_t>{});
}

