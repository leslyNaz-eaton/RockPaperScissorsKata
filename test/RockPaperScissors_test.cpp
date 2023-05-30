#include <gtest/gtest.h>

class name : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

TEST_F(name, FirstTest)
{
   FAIL() << "I ran!!!";
}
