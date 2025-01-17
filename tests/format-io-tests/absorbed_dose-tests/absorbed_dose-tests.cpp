#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <mitama/dimensional/systems/si/derived_units/absorbed_dose.hpp>
#include "../format_io_common.hpp"

TEST_CASE("sievert_t format test", "[quantity][abbreviation]") {
  REQUIRE(fmt(1 | systems::si::absorbed_dose_t{}) == "1 [Gy]");
}
TEST_CASE("gray format test", "[quantity][abbreviation]") {
  REQUIRE(fmt(1 | systems::si::gray) == "1 [Gy]");
}
