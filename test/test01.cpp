#include <gtest/gtest.h>
#include "../include/trol.h"

TEST(test_01, basic_test_set){
    ASSERT_TRUE(trol("This website is for losers LOL!")=="Ths wbst s fr lsrs LL!"); 
}

TEST(test_02, basic_test_set){
    ASSERT_EQ(trol("HELLO WORLD"), "HLL WRLD");
}

TEST(test_03, basic_test_set){
    EXPECT_FALSE(trol("What is your name?") == "What is your name?");
}

TEST(test_04, basic_test_set){
    EXPECT_EQ(trol("???"), "???");
}

TEST(test_05, basic_test_set){
    EXPECT_TRUE(trol("AeOy") == "");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}