#include "Team.hpp"
#include "SmartTeam.hpp"
#include "Character.hpp"
#include <vector>
using namespace std; 
using namespace ariel;

SmartTeam:: SmartTeam (Character *leader): leader(leader){team.push_back(leader);}
void SmartTeam :: add ( Character *character){}
void SmartTeam::attack(SmartTeam *other) {}
int SmartTeam :: isAlive(){return 0;}
string SmartTeam :: print(){return "";}
SmartTeam::~SmartTeam() {}

SmartTeam:: SmartTeam (SmartTeam &&other)noexcept{}
SmartTeam::SmartTeam(const SmartTeam &other):leader(other.leader){}
SmartTeam &SmartTeam::operator=(const SmartTeam &other){return *this;}
SmartTeam &SmartTeam::operator=( SmartTeam &&other) noexcept{return *this;}