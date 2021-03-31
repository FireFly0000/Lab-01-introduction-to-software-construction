#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, SingleSpace) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = " "; 
    EXPECT_EQ(" ", echo(2,test_val));
}

TEST(EchoTest, SpaceBeforeChars) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = " TEST2";
    EXPECT_EQ(" TEST2", echo(2,test_val));
}

TEST(EchoTest, SpaceAfterChars) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "TEST3 ";
    EXPECT_EQ("TEST3 ", echo(2,test_val));
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
