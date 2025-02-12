# pragma once
#include <set> 
#include <iterator>
#include <list>
#include <vector>
#include <iostream>
using namespace std; 

namespace ariel {

class MagicalContainer {
    private:
            vector<int> ogElement;
            multiset<int> sortedElem;
    public: 
        void addElement (int elem);
        void removeElement (int elem);
        int size() const;
        MagicalContainer();
    
    
    class AscendingIterator{
        private:
            const MagicalContainer& container;
            vector<int>::const_iterator iterator;
        public:
            AscendingIterator(const MagicalContainer& container);
            ~AscendingIterator() = default;
            AscendingIterator(const AscendingIterator& other);
            AscendingIterator& operator=(const AscendingIterator& other){return *this;}
            AscendingIterator(AscendingIterator&& other) noexcept = default; 
            AscendingIterator& operator=(AscendingIterator&& other) noexcept {return *this;} 
            
            AscendingIterator& operator++(); 
            int operator*(); 
            bool operator==(const AscendingIterator& other) const;
            bool operator!=(const AscendingIterator& other) const;
            bool operator<(const AscendingIterator& other) const;
            bool operator>(const AscendingIterator& other) const;

            AscendingIterator begin() const{
                return AscendingIterator(container);
            } 
            AscendingIterator end()const{
                return AscendingIterator(container);
            }
    };


    class SideCrossIterator {
        private:
            const MagicalContainer& container;
            vector<int>::const_iterator frontIterator ; 
            vector<int>::const_iterator backIterator;
        public:
            SideCrossIterator(const MagicalContainer& container);
            ~SideCrossIterator() = default;
            SideCrossIterator(const SideCrossIterator& other);
            SideCrossIterator& operator=(const SideCrossIterator& other){return *this;}
            SideCrossIterator(SideCrossIterator&& other) noexcept = default; 
            SideCrossIterator& operator=(SideCrossIterator&& other) noexcept {return *this;}

            SideCrossIterator& operator++(); 
            int operator*(); 
            bool operator==(const SideCrossIterator& other) const;
            bool operator!=(const SideCrossIterator& other) const;
            bool operator<(const SideCrossIterator& other) const;
            bool operator>(const SideCrossIterator& other) const;
            
            SideCrossIterator begin() const{
                return SideCrossIterator(container);
            } 
            SideCrossIterator end()const{
                return SideCrossIterator(container);
            }

    };


    class PrimeIterator {
        private:
            const MagicalContainer& container;
            vector<int>::const_iterator iterator;
        public:
            PrimeIterator(const MagicalContainer& container);
            ~PrimeIterator() = default;
            PrimeIterator(const PrimeIterator& other);
            PrimeIterator& operator=(const PrimeIterator& other){return *this;}
            PrimeIterator(PrimeIterator&& other) noexcept = default; 
            PrimeIterator& operator=(PrimeIterator&& other) noexcept {return *this;}


            PrimeIterator& operator++(); 
            int operator*(); 
            bool operator==(const PrimeIterator& other) const;
            bool operator!=(const PrimeIterator& other) const;
            bool operator<(const PrimeIterator& other) const;
            bool operator>(const PrimeIterator& other) const;
            
            PrimeIterator begin() const{
                return PrimeIterator(container);
            } 
            PrimeIterator end()const{
                return PrimeIterator(container);
            }
    };

    AscendingIterator begin() const {
        return AscendingIterator(*this);
    }

    AscendingIterator end() const {
        return AscendingIterator(*this);
    }

    SideCrossIterator beginCross() const {
        return SideCrossIterator(*this);
    }

    SideCrossIterator endCross() const {
        return SideCrossIterator(*this);
    }

    PrimeIterator beginPrime() const {
        return PrimeIterator(*this);
    }

    PrimeIterator endPrime() const {
        return PrimeIterator(*this);
    }

};
}
