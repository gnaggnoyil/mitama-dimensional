#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/si_units/all.hpp>
#include <dimensional/derived_units/permittivity.hpp>
#include <dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::si;

TEST_CASE("permittivity refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::refined<si::permittivity_r> |= quantity_t<si::permittivity_t>{}) == quantity_t<si::permittivity_t>{});
}
