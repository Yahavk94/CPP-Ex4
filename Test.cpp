#include "Board.hpp"
#include "doctest.h"

using namespace WarGame;

TEST_CASE("Init row 0") {
    Board board(8,8);
    board[{0,1}] = new Soldier();
    CHECK(board[{0,1}]->getHealth() != 0);
    board[{0,2}] = new Soldier();
    CHECK(board[{0,2}]->getHealth() == 0);
    board[{0,3}] = new Soldier();
    CHECK(board[{0,3}]->getHealth() == 0);
    board[{0,4}] = new Soldier();
    CHECK(board[{0,4}]->getHealth() == 0);
    board[{0,5}] = new Soldier();
    CHECK(board[{0,5}]->getHealth() == 0);
    board[{0,6}] = new Soldier();
    CHECK(board[{0,6}]->getHealth() == 0);
    board[{0,7}] = new Soldier();
    CHECK(board[{0,7}]->getHealth() == 0);
}

TEST_CASE("Init row 1") {
    Board board(8,8);
    board[{1,0}] = new Soldier();
    CHECK(board[{1,0}]->getHealth() == 0);
    board[{1,1}] = new Soldier();
    CHECK(board[{1,1}]->getHealth() == 0);
    board[{1,2}] = new Soldier();
    CHECK(board[{1,2}]->getHealth() == 0);
    board[{1,3}] = new Soldier();
    CHECK(board[{1,3}]->getHealth() == 0);
    board[{1,4}] = new Soldier();
    CHECK(board[{1,4}]->getHealth() == 0);
    board[{1,5}] = new Soldier();
    CHECK(board[{1,5}]->getHealth() == 0);
    board[{1,6}] = new Soldier();
    CHECK(board[{1,6}]->getHealth() == 0);
    board[{1,7}] = new Soldier();
    CHECK(board[{1,7}]->getHealth() == 0);
}

TEST_CASE("Init row 2") {
    Board board(8,8);
    board[{2,0}] = new Soldier();
    CHECK(board[{2,0}]->getHealth() == 0);
    board[{2,1}] = new Soldier();
    CHECK(board[{2,1}]->getHealth() == 0);
    board[{2,2}] = new Soldier();
    CHECK(board[{2,2}]->getHealth() == 0);
    board[{2,3}] = new Soldier();
    CHECK(board[{2,3}]->getHealth() == 0);
    board[{2,4}] = new Soldier();
    CHECK(board[{2,4}]->getHealth() == 0);
    board[{2,5}] = new Soldier();
    CHECK(board[{2,5}]->getHealth() == 0);
    board[{2,6}] = new Soldier();
    CHECK(board[{2,6}]->getHealth() == 0);
    board[{2,7}] = new Soldier();
    CHECK(board[{2,7}]->getHealth() == 0);
}

TEST_CASE("Init row 3") {
    Board board(8,8);
    board[{3,0}] = new Soldier();
    CHECK(board[{3,0}]->getHealth() == 0);
    board[{3,1}] = new Soldier();
    CHECK(board[{3,1}]->getHealth() == 0);
    board[{3,2}] = new Soldier();
    CHECK(board[{3,2}]->getHealth() == 0);
    board[{3,3}] = new Soldier();
    CHECK(board[{3,3}]->getHealth() == 0);
    board[{3,4}] = new Soldier();
    CHECK(board[{3,4}]->getHealth() == 0);
    board[{3,5}] = new Soldier();
    CHECK(board[{3,5}]->getHealth() == 0);
    board[{3,6}] = new Soldier();
    CHECK(board[{3,6}]->getHealth() == 0);
    board[{3,7}] = new Soldier();
    CHECK(board[{3,7}]->getHealth() == 0);
}

TEST_CASE("Init row 4") {
    Board board(8,8);
    board[{4,0}] = new Soldier();
    CHECK(board[{4,0}]->getHealth() == 0);
    board[{4,1}] = new Soldier();
    CHECK(board[{4,1}]->getHealth() == 0);
    board[{4,2}] = new Soldier();
    CHECK(board[{4,2}]->getHealth() == 0);
    board[{4,3}] = new Soldier();
    CHECK(board[{4,3}]->getHealth() == 0);
    board[{4,4}] = new Soldier();
    CHECK(board[{4,4}]->getHealth() == 0);
    board[{4,5}] = new Soldier();
    CHECK(board[{4,5}]->getHealth() == 0);
    board[{4,6}] = new Soldier();
    CHECK(board[{4,6}]->getHealth() == 0);
    board[{4,7}] = new Soldier();
    CHECK(board[{4,7}]->getHealth() == 0);
}

TEST_CASE("Init row 5") {
    Board board(8,8);
    board[{5,0}] = new Soldier();
    CHECK(board[{5,0}]->getHealth() == 0);
    board[{5,1}] = new Soldier();
    CHECK(board[{5,1}]->getHealth() == 0);
    board[{5,2}] = new Soldier();
    CHECK(board[{5,2}]->getHealth() == 0);
    board[{5,3}] = new Soldier();
    CHECK(board[{5,3}]->getHealth() == 0);
    board[{5,4}] = new Soldier();
    CHECK(board[{5,4}]->getHealth() == 0);
    board[{5,5}] = new Soldier();
    CHECK(board[{5,5}]->getHealth() == 0);
    board[{5,6}] = new Soldier();
    CHECK(board[{5,6}]->getHealth() == 0);
    board[{5,7}] = new Soldier();
    CHECK(board[{5,7}]->getHealth() == 0);
}

TEST_CASE("Init row 6") {
    Board board(8,8);
    board[{6,0}] = new Soldier();
    CHECK(board[{6,0}]->getHealth() == 0);
    board[{6,1}] = new Soldier();
    CHECK(board[{6,1}]->getHealth() == 0);
    board[{6,2}] = new Soldier();
    CHECK(board[{6,2}]->getHealth() == 0);
    board[{6,3}] = new Soldier();
    CHECK(board[{6,3}]->getHealth() == 0);
    board[{6,4}] = new Soldier();
    CHECK(board[{6,4}]->getHealth() == 0);
    board[{6,5}] = new Soldier();
    CHECK(board[{6,5}]->getHealth() == 0);
    board[{6,6}] = new Soldier();
    CHECK(board[{6,6}]->getHealth() == 0);
    board[{6,7}] = new Soldier();
    CHECK(board[{6,7}]->getHealth() == 0);
}

TEST_CASE("Init row 7") {
    Board board(8,8);
    board[{7,0}] = new Soldier();
    CHECK(board[{7,0}]->getHealth() == 0);
    board[{7,1}] = new Soldier();
    CHECK(board[{7,1}]->getHealth() == 0);
    board[{7,2}] = new Soldier();
    CHECK(board[{7,2}]->getHealth() == 0);
    board[{7,3}] = new Soldier();
    CHECK(board[{7,3}]->getHealth() == 0);
    board[{7,4}] = new Soldier();
    CHECK(board[{7,4}]->getHealth() == 0);
    board[{7,5}] = new Soldier();
    CHECK(board[{7,5}]->getHealth() == 0);
    board[{7,6}] = new Soldier();
    CHECK(board[{7,6}]->getHealth() == 0);
    board[{7,7}] = new Soldier();
    CHECK(board[{7,7}]->getHealth() == 0);
}

TEST_CASE("Init row 5") {
    Board board(8,8);
    board[{5,0}] = new Soldier();
    CHECK(board[{5,0}]->getHealth() == 0);
    board[{5,1}] = new Soldier();
    CHECK(board[{5,1}]->getHealth() == 0);
    board[{5,2}] = new Soldier();
    CHECK(board[{5,2}]->getHealth() == 0);
    board[{5,3}] = new Soldier();
    CHECK(board[{5,3}]->getHealth() == 0);
    board[{5,4}] = new Soldier();
    CHECK(board[{5,4}]->getHealth() == 0);
    board[{5,5}] = new Soldier();
    CHECK(board[{5,5}]->getHealth() == 0);
    board[{5,6}] = new Soldier();
    CHECK(board[{5,6}]->getHealth() == 0);
    board[{5,7}] = new Soldier();
    CHECK(board[{5,7}]->getHealth() == 0);
}

TEST_CASE("Init row 6") {
    Board board(8,8);
    board[{6,0}] = new Soldier();
    CHECK(board[{6,0}]->getHealth() == 0);
    board[{6,1}] = new Soldier();
    CHECK(board[{6,1}]->getHealth() == 0);
    board[{6,2}] = new Soldier();
    CHECK(board[{6,2}]->getHealth() == 0);
    board[{6,3}] = new Soldier();
    CHECK(board[{6,3}]->getHealth() == 0);
    board[{6,4}] = new Soldier();
    CHECK(board[{6,4}]->getHealth() == 0);
    board[{6,5}] = new Soldier();
    CHECK(board[{6,5}]->getHealth() == 0);
    board[{6,6}] = new Soldier();
    CHECK(board[{6,6}]->getHealth() == 0);
    board[{6,7}] = new Soldier();
    CHECK(board[{6,7}]->getHealth() == 0);
}

TEST_CASE("Init row 7") {
    Board board(8,8);
    board[{7,0}] = new Soldier();
    CHECK(board[{7,0}]->getHealth() == 0);
    board[{7,1}] = new Soldier();
    CHECK(board[{7,1}]->getHealth() == 0);
    board[{7,2}] = new Soldier();
    CHECK(board[{7,2}]->getHealth() == 0);
    board[{7,3}] = new Soldier();
    CHECK(board[{7,3}]->getHealth() == 0);
    board[{7,4}] = new Soldier();
    CHECK(board[{7,4}]->getHealth() == 0);
    board[{7,5}] = new Soldier();
    CHECK(board[{7,5}]->getHealth() == 0);
    board[{7,6}] = new Soldier();
    CHECK(board[{7,6}]->getHealth() == 0);
    board[{7,7}] = new Soldier();
    CHECK(board[{7,7}]->getHealth() == 0);
}

TEST_CASE("Init row 7") {
    Board board(8,8);
    board[{7,0}] = new Soldier();
    CHECK(board[{7,0}]->getHealth() == 0);
    board[{7,1}] = new Soldier();
    CHECK(board[{7,1}]->getHealth() == 0);
    board[{7,2}] = new Soldier();
    CHECK(board[{7,2}]->getHealth() == 0);
    board[{7,3}] = new Soldier();
    CHECK(board[{7,3}]->getHealth() == 0);
    board[{7,4}] = new Soldier();
    CHECK(board[{7,4}]->getHealth() == 0);
    board[{7,5}] = new Soldier();
    CHECK(board[{7,5}]->getHealth() == 0);
    board[{7,6}] = new Soldier();
    CHECK(board[{7,6}]->getHealth() == 0);
    board[{7,7}] = new Soldier();
    CHECK(board[{7,7}]->getHealth() == 0);
}

TEST_CASE("Init row 7") {
    Board board(8,8);
    board[{7,0}] = new Soldier();
    CHECK(board[{7,0}]->getHealth() == 0);
    board[{7,1}] = new Soldier();
    CHECK(board[{7,1}]->getHealth() == 0);
    board[{7,2}] = new Soldier();
    CHECK(board[{7,2}]->getHealth() == 0);
    board[{7,3}] = new Soldier();
    CHECK(board[{7,3}]->getHealth() == 0);
    board[{7,4}] = new Soldier();
    CHECK(board[{7,4}]->getHealth() == 0);
    board[{7,5}] = new Soldier();
    CHECK(board[{7,5}]->getHealth() == 0);
    board[{7,6}] = new Soldier();
    CHECK(board[{7,6}]->getHealth() == 0);
    board[{7,7}] = new Soldier();
    CHECK(board[{7,7}]->getHealth() == 0);
}