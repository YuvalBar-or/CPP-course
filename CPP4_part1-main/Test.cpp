#include "doctest.h"
#include "sources/Cowboy.hpp"
#include "sources/Ninja.hpp"
#include "sources/Team.hpp"
#include "sources/OldNinja.hpp"
#include <sstream>
#include <stdexcept>
#include <limits>
#include <vector>

using namespace std;
using namespace ariel;

TEST_CASE ("point class"){
    
    Point p1;
    Point p2 (6, 8);
    Point p3 (7,12);
    Point p4 (3,9);

    CHECK_NOTHROW(Point p);
    CHECK_NOTHROW(Point p13 (12,23));
    CHECK_NE(p1.getX() ,1);
    CHECK_NE(p1.getY() ,1);
    CHECK_EQ(p2.getX(), 6);
    CHECK_EQ(p2.getY(), 8);

    CHECK_EQ(p1.distance(p1), p1.distance(p1));
    CHECK_EQ (p3.distance(p4),5);
    CHECK_EQ (p3.distance(p4) , p4.distance(p3));
} 

TEST_CASE (" COWBOY case"){

    Cowboy cow2 ("brock", Point(4.5 , 532.5));
    Cowboy *cow1= new Cowboy("lesner", Point(5,1));
    Team team (cow1);

    CHECK(cow2.getName()== "larry");
    CHECK(cow2.hasboolets());
    CHECK_THROWS(team.attack(NULL));
    CHECK_THROWS(team.add(new Cowboy("Amnon", Point(3, 1))));
}

TEST_CASE ("NINJA case"){

    Ninja nin1 ("shinsuke", Point(24,86.3), 120 ,24);
    Ninja nin2 ("nakamura" , Point(65,24), 145,24);
    Ninja *nin3 = new Ninja ("bob" , Point(12,56),130 , 12);
    OldNinja old1 ("doron", Point(1,0));
    Team team2 (nin3);

    CHECK(nin1.getName() == "shinsuke");
    CHECK_EQ(nin1.getLocation().distance(Point(24,86.3)),0);
    CHECK(nin2.getName() == "nakamura");
    CHECK_THROWS(team2.add(new Ninja ("alice" , Point(1,7),120,47))); 
    CHECK(old1.getName()== "doron"); 
    CHECK(old1.isAlive());
    CHECK(nin1.isAlive());

}








    