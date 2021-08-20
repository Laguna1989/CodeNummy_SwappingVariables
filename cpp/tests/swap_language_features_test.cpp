#include "swap_language.hpp"
#include <gtest/gtest.h>
#include <tuple>

class SwapLanguageTestFixture : public ::testing::TestWithParam<std::tuple<int, int>> {
};

TEST_P(SwapLanguageTestFixture, CorrectValuesAfterStdSwap)
{
    auto a = std::get<0>(GetParam());
    auto b = std::get<1>(GetParam());

    swap_language_stdswap(a, b);

    ASSERT_EQ(a, std::get<1>(GetParam()));
    ASSERT_EQ(b, std::get<0>(GetParam()));
}

TEST_P(SwapLanguageTestFixture, CorrectValuesAfterStdExchange)
{
    auto a = std::get<0>(GetParam());
    auto b = std::get<1>(GetParam());

    swap_language_stdexchange(a, b);

    ASSERT_EQ(a, std::get<1>(GetParam()));
    ASSERT_EQ(b, std::get<0>(GetParam()));
}

INSTANTIATE_TEST_SUITE_P(SwapLanguageTest, SwapLanguageTestFixture,
                         ::testing::Values(std::make_tuple(1, 2), std::make_tuple(2,1), std::make_tuple(0,0), std::make_tuple(5000, -5000)));
