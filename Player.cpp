//
// Created by moshe on 5/5/2021.
//

#include "Player.hpp"

pandemic::Player::Player() {

}

pandemic::Player &pandemic::Player::fly_direct(pandemic::City city) {
    return *this;
}

pandemic::Player &pandemic::Player::fly_charter(pandemic::City city) {
    return *this;
}

pandemic::Player &pandemic::Player::fly_shuttle(pandemic::City city) {
    return *this;
}

pandemic::Player &pandemic::Player::discover_cure(pandemic::Color color) {
    return *this;
}

pandemic::Player &pandemic::Player::treat(pandemic::City city) {
    return *this;
}

std::string pandemic::Player::role() {
    return "";
}

pandemic::Player &pandemic::Player::take_card(pandemic::City city) {
    return *this;
}

pandemic::Player &pandemic::Player::drive(pandemic::City city) {
    return *this;
}

pandemic::Player &pandemic::Player::build() {
    return *this;
}
