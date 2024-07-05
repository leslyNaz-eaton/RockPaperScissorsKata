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

TEST_F(name,Player1WINSWITHROCK )
{
   EXPECT_EQ(WIN,Game(ROCK,SCISSORS));
}
TEST_F(name,Player1WINSWITHPAPER)
{
   EXPECT_EQ(WIN,Game(PAPER,ROCK));

}

TEST_F(name,Player1WINSWITHSCISSORS)
{
   EXPECT_EQ(WIN,Game(SCISSORS,PAPER));

}

TEST_F(name,Player2WINSWITHROCK )
{
   EXPECT_EQ(LOSS,Game(SCISSORS,ROCK));
}

TEST_F(name,Player2WINSWITHPAPER)
{
   EXPECT_EQ(LOSS,Game(ROCK,PAPER));
}
TEST_F(name,Player2WINSWITHSCISSORS )
{
   EXPECT_EQ(LOSS,Game(PAPER,SCISSORS));
}

TEST_F(name,ROCKTIE)
{
   EXPECT_EQ(TIE,Game(ROCK,ROCK));
}
TEST_F(name,SCISSORSTIE )
{
   EXPECT_EQ(TIE,Game(SCISSORS,SCISSORS));
}
TEST_F(name,PAPERTIE )
{
   EXPECT_EQ(TIE,Game(PAPER,PAPER));
}

