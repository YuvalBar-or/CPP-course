#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <stdexcept>
using namespace ariel;
using namespace std;

TEST_CASE("constructors"){
    MagicalContainer con1; 
    CHECK (con1.size() ==0 );  
}


TEST_CASE("adding and removing  elements"){
    MagicalContainer con2;
    CHECK_NOTHROW(con2.addElement(5));
    CHECK_NOTHROW(con2.addElement(4));
    CHECK_NOTHROW(con2.addElement(8));
    CHECK_NOTHROW(con2.addElement(59));
    CHECK_NOTHROW(con2.addElement(12));
  //  CHECK(con2.size() == 5);
    // adding the same element miltiple times:
    CHECK_NOTHROW(con2.addElement(59));
    CHECK_NOTHROW(con2.addElement(4));
    CHECK_NOTHROW(con2.addElement(4));
    CHECK_NOTHROW(con2.addElement(4));
    CHECK_NOTHROW(con2.addElement(48));
  //  CHECK(con2.size() == 10);

    int cuur_size= con2.size();

    // removing 
    CHECK_NOTHROW(con2.removeElement(5));
    CHECK_NOTHROW(con2.removeElement(4));
    CHECK_NOTHROW(con2.removeElement(8));

    int after_size = con2.size();

 //   CHECK_EQ(cuur_size,after_size+3);
}


// TEST_CASE("Ascending Iterator"){
//     MagicalContainer con3;
//     CHECK_NOTHROW(con3.addElement(5));
//     CHECK_NOTHROW(con3.addElement(4));
//     CHECK_NOTHROW(con3.addElement(8));
//     CHECK_NOTHROW(con3.addElement(59));
//     CHECK_NOTHROW(con3.addElement(12));

//     MagicalContainer::AscendingIterator ascend(con3);
//     MagicalContainer :: AscendingIterator ascend1(con3);
   
//     // checking the * operator 
//     CHECK(*ascend == 18);
//     ++ascend;
//     CHECK(*ascend == 879);
//     ++ascend;
//     CHECK(*ascend == 9);
//     ++ascend;

//     // checking the * operator on null 
//     CHECK_THROWS(*ascend);

//     // checking comparison methods
//     CHECK_THROWS_AS(ascend.operator==(ascend1), std::invalid_argument); 
//     CHECK_THROWS_AS(ascend.operator!=(ascend1), std::invalid_argument);
//     CHECK_THROWS_AS(ascend.operator>(ascend1),  std::invalid_argument); 
//     CHECK_THROWS_AS(ascend.operator<(ascend1),  std::invalid_argument);

//     CHECK(*(++ascend) == 88);
// }

TEST_CASE("side iterator"){
    MagicalContainer con3;
    CHECK_NOTHROW(con3.addElement(5));
    CHECK_NOTHROW(con3.addElement(4));
    CHECK_NOTHROW(con3.addElement(8));
    CHECK_NOTHROW(con3.addElement(59));
    CHECK_NOTHROW(con3.addElement(12));

    MagicalContainer :: SideCrossIterator side(con3);
    MagicalContainer :: SideCrossIterator side1(con3);

    CHECK_THROWS_AS(side.operator==(side1), std::invalid_argument); 
    CHECK_THROWS_AS(side.operator!=(side1), std::invalid_argument);
    CHECK_THROWS_AS(side.operator>(side1),  std::invalid_argument); 
    CHECK_THROWS_AS(side.operator<(side1),  std::invalid_argument);

    CHECK(*(++side) == 87);
}

TEST_CASE ("prime iterator"){
    MagicalContainer con3;
    CHECK_NOTHROW(con3.addElement(5));
    CHECK_NOTHROW(con3.addElement(4));
    CHECK_NOTHROW(con3.addElement(8));
    CHECK_NOTHROW(con3.addElement(59));
    CHECK_NOTHROW(con3.addElement(12));

    MagicalContainer :: PrimeIterator prime(con3);
    MagicalContainer :: PrimeIterator prime1(con3);

    CHECK_THROWS_AS(prime.operator==(prime1), std::invalid_argument); 
    CHECK_THROWS_AS(prime1.operator!=(prime), std::invalid_argument);
    CHECK_THROWS_AS(prime.operator>(prime1),  std::invalid_argument); 
    CHECK_THROWS_AS(prime.operator<(prime1),  std::invalid_argument);

    CHECK(*(++prime) == 11);
}

// TEST_CASE("not throw begin and end ") {
//     MagicalContainer container;
//     CHECK(container.size() == 0);
//     CHECK_NOTHROW(container.begin());
//     CHECK(container.size() == 0);
//     CHECK_NOTHROW(container.end());
//     CHECK(container.size() == 0);

//     MagicalContainer con4;
//     MagicalContainer::AscendingIterator ascend(con4);
//     MagicalContainer :: SideCrossIterator side(con4);
//     MagicalContainer :: PrimeIterator prime(con4);

//     // same place 
//     CHECK(ascend.begin() == ascend.end());
//     CHECK(side.begin() == side.end());
//     CHECK(prime.begin() == prime.end());

//     CHECK_NOTHROW(con4.addElement(5));
//     CHECK_NOTHROW(con4.addElement(4));
//     CHECK_NOTHROW(con4.addElement(8));
//     CHECK_NOTHROW(con4.addElement(59));
//     CHECK_NOTHROW(con4.addElement(12));

//     CHECK(*ascend.begin() == 4);
//     CHECK(*side.begin() == 7);
//     CHECK(*prime.begin() == 9);

// }

