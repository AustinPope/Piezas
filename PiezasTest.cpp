/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, Test_one)
{
  Piezas test_piezas;
  char test_return = (char)test_piezas.dropPiece(0);
  ASSERT_EQ(test_return, 'X');
}

TEST(PiezasTest, Test_two)
{
  Piezas test_piezas;
  test_piezas.dropPiece(0);
  char test_return = (char)test_piezas.dropPiece(1);
  ASSERT_EQ(test_return, 'O');
}

TEST(PiezasTest, Test_three)
{
  Piezas test_piezas;
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(1);
  char test_return = (char)test_piezas.dropPiece(2);
  ASSERT_EQ(test_return, 'X');
}

TEST(PiezasTest, Test_four)
{
  Piezas test_piezas;
  char test_return = (char)test_piezas.dropPiece(5);
  ASSERT_EQ(test_return, '?');
}

TEST(PiezasTest, Test_five)
{
  Piezas test_piezas;
  char test_return = (char)test_piezas.dropPiece(-1);
  ASSERT_EQ(test_return, '?');
}

TEST(PiezasTest, Test_six)
{
  Piezas test_piezas;
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(0);
  char test_return = (char)test_piezas.dropPiece(0);
  ASSERT_EQ(test_return, ' ');
}

TEST(PiezasTest, Test_seven)
{
  Piezas test_piezas;
  test_piezas.dropPiece(0);
  char test_return = (char)test_piezas.pieceAt(0,0);
  ASSERT_EQ(test_return, 'X');
}

TEST(PiezasTest, Test_eight)
{
  Piezas test_piezas;
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(0);
  char test_return = (char)test_piezas.pieceAt(1,0);
  ASSERT_EQ(test_return, 'O');
}

TEST(PiezasTest, Test_nine)
{
  Piezas test_piezas;
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(1);
  char test_return = (char)test_piezas.pieceAt(1,1);
  ASSERT_EQ(test_return, 'O');
}

TEST(PiezasTest, Test_ten)
{
  Piezas test_piezas;
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(2);
  char test_return = (char)test_piezas.pieceAt(2,2);
  ASSERT_EQ(test_return, 'X');
}

TEST(PiezasTest, Test_eleven)
{
  Piezas test_piezas;
  char test_return = (char)test_piezas.gameState();
  ASSERT_EQ(test_return, '?');
}

TEST(PiezasTest, Test_twelve)
{
  Piezas test_piezas;
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(0);
  char test_return = (char)test_piezas.gameState();
  ASSERT_EQ(test_return, '?');
}

TEST(PiezasTest, Test_thirteen)
{
  Piezas test_piezas;
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(5);
  char test_return = (char)test_piezas.gameState();
  ASSERT_EQ(test_return, 'X');
}

TEST(PiezasTest, Test_fourteen)
{
  Piezas test_piezas;
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(3);
  char test_return = (char)test_piezas.gameState();
  ASSERT_EQ(test_return, 'X');
}

TEST(PiezasTest, Test_fifteen)
{
  Piezas test_piezas;
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(5);
  test_piezas.dropPiece(3);
  char test_return = (char)test_piezas.gameState();
  ASSERT_EQ(test_return, 'O');
}


TEST(PiezasTest, Test_fifteen)
{
  Piezas test_piezas;
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(0);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(1);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(2);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(3);
  test_piezas.dropPiece(3);
  char test_return = (char)test_piezas.gameState();
  ASSERT_EQ(test_return, ' ');
}
