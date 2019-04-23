#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/si_units/all.hpp>
#include <dimensional/derived_units/molar_conductivity.hpp>
#include <dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::si;

TEST_CASE("molar_conductivity refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::refined<si::molar_conductivity_r> |= quantity_t<si::molar_conductivity_t>{}) == quantity_t<si::molar_conductivity_t>{});
}
