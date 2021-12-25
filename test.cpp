#include <gtest/gtest.h>
#include "main.cpp"


TEST(BasicTests, CheckType) {
    EXPECT_STRCASEEQ("positive", type_of_int(5));
    EXPECT_STRCASEEQ("negative", type_of_int(-100));
    EXPECT_STRCASEEQ("null", type_of_int(0));
}

TEST(BasicTests, CheckType2) {
    EXPECT_STRCASEEQ("positive", type_of_int(1000));
    EXPECT_STRCASEEQ("negative", type_of_int(-1001));
    EXPECT_STRCASEEQ("negative", type_of_int(-10000));
}

TEST(BasicTests, CheckEven) {
    EXPECT_STRCASEEQ("true", even(1000));
    EXPECT_STRCASEEQ("false", even(-1001));
    EXPECT_STRCASEEQ("true", even(-10000));
}

TEST(BasicTests, CheckEven2) {
    EXPECT_STRCASEEQ("true", even(1000));
    EXPECT_STRCASEEQ("true", even(0));
    EXPECT_STRCASEEQ("false", even(-1));
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}

