#include "RockPaperScissors.h"
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

TEST_F(name, WhenRockisPlayedAgainstpaperPaperShouldWin)
{
   EXPECT_EQ("Paper Wins!", Battle("Paper", "Rock"));
}
TEST_F(name,WhenScissorsisPlayedagainstPaperScissorsshouldwin)
{
   EXPECT_EQ("Scissors Wins!", Battle("Scissors","Paper"));
}
