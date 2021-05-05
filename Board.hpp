//
// Created by moshe on 5/5/2021.
//

#ifndef UNTITLED5_BOARD_HPP
#define UNTITLED5_BOARD_HPP

#include <ostream>
#include "City.hpp"
namespace pandemic {
    class Board {

    public:
        int a;
        Board() = default;
        void build(City city);
        bool is_clean();
        void remove_cures();
        //std::string colors(int color);
        int &operator[](City city);
        friend std::ostream &operator<<(std::ostream &out, Board &board);


    };

}
#endif //UNTITLED5_BOARD_HPP
