#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/systems/si/derived_units/magnetic_reluctance.hpp>
#include <mitama/dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::systems::si;

TEST_CASE("magnetic_reluctance refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::accepts<systems::si::magnetic_reluctance_r> |= quantity_t<systems::si::magnetic_reluctance_t>{}) == quantity_t<systems::si::magnetic_reluctance_t>{});
}

