#include "Team.hpp"
#include "Team2.hpp"
#include "Character.hpp"
#include <vector>
using namespace std; 
using namespace ariel;

Team2:: Team2 (Character *leader): leader(leader){}
void Team2 :: add ( Character *character){}
void Team2::attack(Team2 *other) {}
int Team2 :: isAlive(){return 0;}
string Team2 :: print(){return "";}
Team2::~Team2() {}
Team2:: Team2 (Team2 &&other)noexcept{}
Team2:: Team2(const Team2 &other):leader(other.leader){}
Team2 &Team2::operator=(const Team2 &other){return *this;}
Team2 &Team2::operator=( Team2 &&other) noexcept{return *this;}



