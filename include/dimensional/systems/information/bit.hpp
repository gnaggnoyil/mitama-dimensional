#ifndef MITAMA_DIMENSIONAL_SYSTEMS_INFORMATION_BIT_HPP
#define MITAMA_DIMENSIONAL_SYSTEMS_INFORMATION_BIT_HPP
#include <dimensional/units.hpp>
#include <dimensional/io.hpp>

namespace mitama::systems::information {
struct info {
    using is_base_dimension = void;
    using is_dimesionless = void;
};

using bit_t = make_unit_t<info>;
}

namespace mitama {
template<>
struct abbreviation<mitama::systems::information::bit_t> {
    static constexpr char str[] = "bit";
};
}

#endif