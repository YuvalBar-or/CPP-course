#include "Character.hpp"
using namespace std;
using namespace ariel;

Character :: Character(string name, const Point &place , int lives): name (name), location (place) , lives( lives){}
bool Character :: isAlive(){ return false;}
double Character :: distance (Character &other){return 0;}
void Character:: hit (int number){}
string Character:: getName(){return "";}
Point Character:: getLocation(){return Point(0.0 , 0.0);}
string Character:: print(){return "";}