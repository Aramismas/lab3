#include "../header/c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
  char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
  EXPECT_EQ("hello world", echo(3, test_val));
}

TEST(EchoTest, EmptyString) {
  char* test_val[1]; test_val[0] = "./c-echo";
  EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, capitalletters) {
  char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "HELLO";
  EXPECT_EQ("HELLO", echo(2, test_val));
}

TEST(EchoTest, specialcharacters) {
  char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "He!!o"; test_val[2] = "@"; test_val[3] = "World!!";
  EXPECT_EQ("He!!o @ World!!", echo(4, test_val));
}

TEST(EchoTest, longstring) {
  char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Learning about git, make, CMake, and unit testing is tons of fun!!";
  EXPECT_EQ("Learning about git, make, CMake, and unit testing is tons of fun!!", echo(2, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

