#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <mitama/dimensional/systems/si/derived_units/work.hpp>
#include "../format_io_common.hpp"

TEST_CASE("work_t format test", "[quantity][abbreviation]") {
  REQUIRE(fmt(1 | systems::si::work_t{}) == "1 [J]");
}
TEST_CASE("joule format test", "[quantity][abbreviation]") {
  REQUIRE(fmt(1 | systems::si::joule) == "1 [J]");
}
