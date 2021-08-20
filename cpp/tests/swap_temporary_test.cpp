#include "swap_temporary.hpp"
#include <gtest/gtest.h>
#include <tuple>

class SwapTemporaryTestFixture : public ::testing::TestWithParam<std::tuple<int, int>> {
};

TEST_P(SwapTemporaryTestFixture, CorrectValuesAfterSwap)
{
    auto a = std::get<0>(GetParam());
    auto b = std::get<1>(GetParam());

    swap_temporary(a, b);

    ASSERT_EQ(a, std::get<1>(GetParam()));
    ASSERT_EQ(b, std::get<0>(GetParam()));
}

INSTANTIATE_TEST_SUITE_P(SwapTemporaryTest, SwapTemporaryTestFixture,
                         ::testing::Values(std::make_tuple(1, 2), std::make_tuple(2,1), std::make_tuple(0,0), std::make_tuple(5000, -5000)));
