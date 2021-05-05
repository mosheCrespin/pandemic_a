//
// Created by moshe on 5/5/2021.
//

#ifndef UNTITLED5_MEDIC_HPP
#define UNTITLED5_MEDIC_HPP

#include "Player.hpp"
#include "Board.hpp"
namespace pandemic {
    class Medic : public Player {
    public:
        Medic(Board board, City city);
    };
}

#endif //UNTITLED5_MEDIC_HPP
