#include <catch2/catch.hpp>
#include "add_n_to_vector.h"

TEST_CASE("add_n_to_vector") {
    std::vector<int> vec = {1, 2, 3};
    std::vector<int> expected_vec = {4, 5, 6};

    REQUIRE(add_n_to_vector(vec, 3) == expected_vec);
}
