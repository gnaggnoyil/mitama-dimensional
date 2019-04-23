#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/derived_units/frequency.hpp>
#include "../format_io_common.hpp"

TEST_CASE("frequency_t format test", "[quantity][abbreviation]") {
  REQUIRE(fmt(1 | si::frequency_t{}) == "1 [Hz]");
}
TEST_CASE("hertz format test", "[quantity][abbreviation]") {
  REQUIRE(fmt(1 | si::hertz) == "1 [Hz]");
}