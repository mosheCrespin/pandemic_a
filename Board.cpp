//
// Created by moshe on 5/5/2021.
//

#include "Board.hpp"

namespace pandemic {
    void pandemic::Board::build(pandemic::City city) {

    }

    std::ostream &operator<<(std::ostream &out, pandemic::Board &board) {
        out << board.a;
        return out;
    }


    int &pandemic::Board::operator[](pandemic::City city) {
        return this->a;
    }

    bool Board::is_clean() {
        return false;
    }

    void Board::remove_cures() {

    }

}