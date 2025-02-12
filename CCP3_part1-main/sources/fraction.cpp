#include "Fraction.hpp"
#include <iostream>
using namespace ariel; 
using namespace std; 


Fraction::Fraction(int num1, int num2) {}
Fraction Fraction::operator+(const Fraction& frac) {return frac;}
Fraction Fraction :: operator+(const float num){return *this;}
Fraction Fraction::operator-(const Fraction& frac){return frac;}
Fraction Fraction :: operator-(const float num){return *this;}
Fraction Fraction :: operator*(const Fraction& frac){return frac;}
Fraction Fraction :: operator*(const float num){return *this;}
Fraction Fraction :: operator/(const Fraction& frac){return frac;}
Fraction Fraction :: operator/(const float num){return *this;}
bool Fraction :: operator==(const Fraction& fr){return false;}
bool Fraction :: operator==(const float num){return false;}
        
bool Fraction :: operator>(const Fraction&) {return false;}
bool Fraction :: operator>(const float) {return false;}
bool Fraction :: operator<(const Fraction&) {return false;}
bool Fraction :: operator<(const float){return false;}
bool Fraction :: operator>=(const Fraction&){return false;}
bool Fraction :: operator>=(const float){return false;}
bool Fraction :: operator<=(const Fraction&){return false;}
bool Fraction :: operator<=(const float){return false;}
 
Fraction Fraction :: operator++(){return *this; }
Fraction Fraction :: operator--(){return *this; }
Fraction Fraction :: operator++(int num ){return *this; }
Fraction Fraction :: operator--(int num){return *this; }

std::ostream &operator<<(std::ostream &stream, const Fraction &fraction) { return stream; }
std::istream &operator>>(std::istream &stream, const Fraction &fraction) { return stream; }
Fraction operator+(float f, Fraction& frac) {return frac;}
Fraction operator-(float f, Fraction& frac){return frac;}
Fraction operator*(float f, Fraction& frac){return frac;}
Fraction operator/(float f, Fraction& frac){return frac;}
bool operator==(float f, Fraction& frac){return false;}
bool operator>(float f, Fraction& frac){return false;}
bool operator>=(float f, Fraction& frac){return false;}
bool operator<(float f, Fraction& frac){return false;}
bool operator<=(float f, Fraction& frac){return false;}
    



