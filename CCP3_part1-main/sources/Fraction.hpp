#pragma once 
#include <iostream>
#include <string>

namespace ariel {};
    class Fraction {

        private:
            int numerator, denominator;
        
        public:
            Fraction(int num1, int num2);
            Fraction operator+(const Fraction&);
            Fraction operator+(float number1);
            Fraction operator-(const Fraction&);
            Fraction operator-(float number1);
            Fraction operator*(const Fraction&);
            Fraction operator*(float number1);
            Fraction operator/(const Fraction&);
            Fraction operator/(float number1);
            bool operator==(const Fraction&);
            bool operator==(float number1);
        
            bool operator >(const Fraction&);
            bool operator >(float number1 );
            bool operator<(const Fraction&);
            bool operator<(float number1);
            bool operator>=(const Fraction&);
            bool operator>=(float number1);
            bool operator<=(const Fraction&);
            bool operator<=(float number1);

   
            Fraction operator++();
            Fraction operator--();
            Fraction operator++(int num);
            Fraction operator--(int num);

            friend std :: ostream& operator<<(std::ostream& ooutput, const Fraction& frac);
            friend std :: istream& operator>>(std::istream& input, Fraction& frac);
    
        
            friend Fraction operator+(float number, Fraction& frac);
            friend Fraction operator-(float number, Fraction& frac);
            friend Fraction operator*(float number, Fraction& frac);
            friend Fraction operator/(float number, Fraction& frac);
            friend bool operator==(float number, Fraction& frac);
            friend bool operator>(float number, Fraction& frac);
            friend bool operator>=(float number, Fraction& frac);
            friend bool operator<(float number, Fraction& frac);
            friend bool operator<=(float number, Fraction& frac);

    
    
};