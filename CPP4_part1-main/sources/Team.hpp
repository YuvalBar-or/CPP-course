#pragma once
#include "Character.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "Cowboy.hpp"
#include <vector>
using namespace std; 
namespace ariel{};

class Team{
    private:
        vector<Character *> team;
        Character *leader;
    
    public:
        Team (Character *leader); 
        void add ( Character *character);
        void attack(Team *other);
        int stillAlive();
        string print();
        ~Team();
        Team();  
        Team& operator=(const Team &other);
        Team& operator=( Team&& other)noexcept;
        Team(Team &&other)noexcept;
        Team(const Team &other); 
       

    
        

};