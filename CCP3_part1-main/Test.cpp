#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;


TEST_CASE ("constructor errors and reduced form"){
    CHECK_THROWS(Fraction(5,0));
    CHECK(Fraction (4,16) == Fraction (1,4) );
    bool x = true;
    CHECK_THROWS(Fraction(x,4));
}

TEST_CASE ("arithmetic operations"){
    Fraction frac1 =Fraction(35, 6) - Fraction(5, 6);
    Fraction frac2 = Fraction(35, 6) - ((float)5 / 6);
    Fraction frac3 =Fraction(35, 6) + Fraction(7, 6);
    Fraction frac4 = Fraction(35, 6) + ((float)7 / 6);
    Fraction frac5 = Fraction(24,7) / Fraction(24,2);
    Fraction frac6 = Fraction(24,7) / ((float)24 / 2);
    Fraction frac7 = Fraction(23,8) * Fraction(1,2);
    Fraction frac8 = Fraction(23,8) * ((float)1.2);

    CHECK(frac1 == Fraction(5, 1));
    CHECK(frac2 == Fraction(5, 1));
    CHECK( frac3 == Fraction(7, 1));
    CHECK(frac4 == Fraction(7, 1));
    CHECK(frac5 == Fraction(2,7));
    CHECK(frac6 == Fraction(2,7));
    CHECK(frac7 == Fraction(23,16));
    CHECK(frac8 == Fraction(23,16));
}

TEST_CASE (" ++ and -- operators "){
    Fraction fr (2,1);
    CHECK (fr -- == Fraction(1,1));
    CHECK (fr == Fraction (5,1));
    CHECK ( -- fr == Fraction (2,1));
    CHECK (fr ++ == Fraction (3,1));
    CHECK (++ fr == Fraction (4,1));
}

TEST_CASE ("Comparison operators"){
    CHECK((Fraction(4, 2) < 4.2));
    CHECK((Fraction(8, 5) <= 0.5));
    CHECK((Fraction(7,3) >= 0.2));
    CHECK((Fraction(8,2) > 0.9));
    CHECK((Fraction(2,7) < Fraction(7,2)));
    CHECK((Fraction(6,2) <= Fraction(2,6)));
    CHECK((Fraction(7,2) >= Fraction(2,7)));
    CHECK((Fraction(4, 8) > Fraction(4, 9)));
}





