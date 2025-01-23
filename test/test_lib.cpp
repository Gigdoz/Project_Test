#define CATCH_CONFIG_MAIN

#include "../lib/math.h"
#include "catch.h"

TEST_CASE("Sum int") {
    CHECK(Sum(2, 3) == 2 + 3);
}

TEST_CASE("Sum double") {
    CHECK(Sum(2.323, 3.12) == 2.323 + 3.12);
}
