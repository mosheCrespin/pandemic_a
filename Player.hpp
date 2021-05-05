//
// Created by moshe on 5/5/2021.
//

#ifndef UNTITLED5_PLAYER_HPP
#define UNTITLED5_PLAYER_HPP
#include <iostream>
#include "City.hpp"
#include "Color.hpp"

namespace pandemic {
    class Player {
    public:
        Player();
        Player &fly_direct(City city);
        Player &fly_charter(City city);
        Player &fly_shuttle(City city);
        Player& build();
        Player &discover_cure(pandemic::Color color);
        Player &treat(City city);
        std::string role();
        Player& take_card(pandemic::City city);
        Player& drive(City city);

    };

}
#endif //UNTITLED5_PLAYER_HPP
