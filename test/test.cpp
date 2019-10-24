#include "gtest/gtest.h"
#include "calc.h"

TEST(Test, Add) {
    ASSERT_EQ(2, Add(1, 1));
    ASSERT_EQ(5, Add(3, 2));
    ASSERT_EQ(10, Add(7, 3));
}

TEST(Test, Sub) {
    ASSERT_EQ(3, Sub(5, 2));
    ASSERT_EQ(-10, Sub(5, 15));
}
TEST(Test, Mul) {
    ASSERT_EQ(20, Mul(10, 2));
    ASSERT_EQ(5, Mul(5, 1));
}
TEST(Test, Div) {
    ASSERT_EQ(3, Div(6, 2));
    ASSERT_EQ(10, Div(20, 2));
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}