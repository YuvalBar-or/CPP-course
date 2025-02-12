#pragma once 
#include "Character.hpp"
namespace ariel{};
using namespace std; 

class Cowboy: public Character{
    private:
        int bullets; 

    public:
        Cowboy (string name, const Point &location);
        void shoot(Character *enemy);
        bool hasboolets();
        void reload();


};