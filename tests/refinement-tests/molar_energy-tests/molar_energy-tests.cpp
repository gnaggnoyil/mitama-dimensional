#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/si_units/all.hpp>
#include <dimensional/derived_units/molar_energy.hpp>
#include <dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::si;

TEST_CASE("molar_energy refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::refined<si::molar_energy_r> |= quantity_t<si::molar_energy_t>{}) == quantity_t<si::molar_energy_t>{});
}
