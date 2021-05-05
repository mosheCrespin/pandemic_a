#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "doctest.h"
using namespace pandemic;

#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;

TEST_CASE("wrong input")
{
    Board board;
    CHECK_THROWS(board[City::Baghdad] =-1);
    CHECK_THROWS(board[City::Cairo] =-1);
    CHECK_THROWS(board[City::LosAngeles]=-1);
    CHECK_THROWS(board[City::SanFrancisco]=-1);
    CHECK_THROWS(board[City::Riyadh]=-1);
}
TEST_CASE("good input")
{
    Board board;  // Initialize an empty board (with 0 disease cubes in any city).
    CHECK_NOTHROW(board[City::Baghdad] =1);
    CHECK_NOTHROW(board[City::Cairo] =1);
    CHECK_NOTHROW(board[City::LosAngeles]=1);
    CHECK_NOTHROW(board[City::SanFrancisco]=1);
    CHECK_NOTHROW(board[City::Riyadh]=1);
}

TEST_CASE("good driving")
{
    Board board;
    OperationsExpert player(board, City::Chicago);
    CHECK_NOTHROW(player.drive(City::Montreal));
    CHECK_NOTHROW(player.drive(City::Atlanta));
    CHECK_NOTHROW(player.drive(City::MexicoCity));
    CHECK_NOTHROW(player.drive(City::LosAngeles));
    CHECK_NOTHROW(player.drive(City::SanFrancisco));
}

TEST_CASE("bad driving")
{
    Board board;
    OperationsExpert player(board, City::Istanbul);
    CHECK_THROWS(player.drive(City::Montreal));
    CHECK_THROWS(player.drive(City::Atlanta));
    CHECK_THROWS(player.drive(City::MexicoCity));
    CHECK_THROWS(player.drive(City::LosAngeles));
    CHECK_THROWS(player.drive(City::SanFrancisco));
}

