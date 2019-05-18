
#include <boost/preprocessor/list/for_each_product.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/stringize.hpp>
#define SI_UNITS_R (meter_t, (ampere_t, (candela_t, (kelvin_t, (mol_t, (second_t, BOOST_PP_NIL))))))
#define SI_PREFIXES (pico, (nano, (micro, (milli, (centi, (deci, (deca, (hecto, (kilo, (mega, (giga, (tera, BOOST_PP_NIL))))))))))))

#define TEST_GENERATE(r, product) \
		TEST_CASE(BOOST_PP_STRINGIZE(BOOST_PP_CAT product), "format") \
		{ \
			TEST_BODY product \
		}
#define TEST_BODY(prefix, unit_type) \
    using namespace std::literals; \
    REQUIRE(fmt(1 | prefix * unit_type{}) == "1 ["s + prefix_<std::prefix>::str + symbol_<typename basis_<unit_type>::template type<0>>::str + "]"s);
#define CATCH_CONFIG_MAIN
#include <test_util.hpp>
#include <catch2/catch.hpp>
#include <boost/format.hpp>
#include <catch2/catch.hpp>
#include <dimensional/arithmetic.hpp>
#include <dimensional/io.hpp>
#include <dimensional/systems/si/prefix.hpp>
#include <dimensional/quantity.hpp>
#include <dimensional/systems/si/all.hpp>
#include <string>
using namespace mitama;
using namespace mitama::systems::si;
using namespace mitama::systems::nonsi;

inline auto fmt = [](auto const &a) {
  return (boost::format("%1%") % a).str();
};

// First, we test metric prefixes format.
TEST_CASE("prefix format tests", "[prefix]") {
  using namespace std::literals;
  REQUIRE(prefix_<std::pico>::str == "p"s);
  REQUIRE(prefix_<std::nano>::str == "n"s);
  REQUIRE(prefix_<std::micro>::str == "u"s);
  REQUIRE(prefix_<std::milli>::str == "m"s);
  REQUIRE(prefix_<std::centi>::str == "c"s);
  REQUIRE(prefix_<std::deci>::str == "d"s);
  REQUIRE(prefix_<std::deca>::str == "da"s);
  REQUIRE(prefix_<std::hecto>::str == "h"s);
  REQUIRE(prefix_<std::kilo>::str == "k"s);
  REQUIRE(prefix_<std::mega>::str == "M"s);
  REQUIRE(prefix_<std::giga>::str == "G"s);
  REQUIRE(prefix_<std::tera>::str == "T"s);
}

// Second, we test SI unit symbols format.
TEST_CASE("symbol format tests", "[symbol]") {
  using namespace std::literals;
  REQUIRE(symbol_<::mitama::systems::si::length>::str == "m"s);
  REQUIRE(symbol_<electric_current>::str == "A"s);
  REQUIRE(symbol_<luminous_intensity>::str == "cd"s);
  REQUIRE(symbol_<thermodynamic_temperature>::str == "K"s);
  REQUIRE(symbol_<::mitama::systems::si::mass>::str == "g"s);
  REQUIRE(symbol_<amount_of_substance>::str == "mol"s);
  REQUIRE(symbol_<::mitama::systems::si::time>::str == "s"s);
}

// Third, we test symbol with metric prefix.
// For each test with cartecian product of metric prefixes and SI units
// will be automatically generated by BOOST_PP_LIST_FOR_EACH_PRODUCT.
BOOST_PP_LIST_FOR_EACH_PRODUCT(TEST_GENERATE, 2, (SI_PREFIXES, SI_UNITS_R))
