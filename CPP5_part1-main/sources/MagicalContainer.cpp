#include "MagicalContainer.hpp"
using namespace ariel;
using namespace std; 

/********************* MAGICAL CONTAINER ***********************/
/********************* MAGICAL CONTAINER ***********************/
void MagicalContainer :: addElement (int elem){}
MagicalContainer::MagicalContainer(){}
void MagicalContainer :: removeElement (int elem){}
int MagicalContainer :: size() const{
    return ogElement.size();
}



/********************* ASCENDING ITERATOR ***********************/
/********************* ASCENDING ITERATOR ***********************/
MagicalContainer :: AscendingIterator :: AscendingIterator( const MagicalContainer& container): 
container(container), iterator(container.ogElement.begin()){}

MagicalContainer :: AscendingIterator :: AscendingIterator(const AscendingIterator& other):
container (other.container) , iterator(other.iterator){}

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++(){return *this;}
int MagicalContainer::AscendingIterator::operator*(){return *iterator;}
bool MagicalContainer :: AscendingIterator :: operator==(const AscendingIterator& other) const{return false;}
bool MagicalContainer :: AscendingIterator :: operator!=(const AscendingIterator& other) const{return false;}
bool MagicalContainer :: AscendingIterator :: operator<(const AscendingIterator& other) const{return false;}
bool MagicalContainer :: AscendingIterator :: operator>(const AscendingIterator& other) const{return false;}



/********************* SIDE CROSS ITERATOR ***********************/
/********************* SIDE CROSS ITERATOR ***********************/
MagicalContainer :: SideCrossIterator:: SideCrossIterator(const MagicalContainer& container): 
container (container) , frontIterator (container.ogElement.begin()), 
backIterator (container.ogElement.end()-1){}

MagicalContainer :: SideCrossIterator :: SideCrossIterator(const SideCrossIterator& other):
container (other.container) , frontIterator(other.frontIterator) , backIterator(other.backIterator){}
     
MagicalContainer:: SideCrossIterator& MagicalContainer :: SideCrossIterator:: operator++(){return *this;}
int MagicalContainer :: SideCrossIterator:: operator*(){return 0;}
bool MagicalContainer :: SideCrossIterator:: operator==(const SideCrossIterator& other) const{return false;}
bool MagicalContainer :: SideCrossIterator:: operator!=(const SideCrossIterator& other) const{ return false;}
bool MagicalContainer :: SideCrossIterator:: operator<(const SideCrossIterator& other) const{return false;}
bool MagicalContainer :: SideCrossIterator:: operator>(const SideCrossIterator& other) const{return false;}



/********************* PRIME ITERATOR ***********************/
/********************* PRIME ITERATOR ***********************/
MagicalContainer :: PrimeIterator :: PrimeIterator(const MagicalContainer& container):
container(container), iterator(container.ogElement.begin()){}

MagicalContainer :: PrimeIterator :: PrimeIterator(const PrimeIterator& other):
container (other.container) , iterator(other.iterator){}
           
MagicalContainer:: PrimeIterator& MagicalContainer :: PrimeIterator :: operator++(){return *this;}
int MagicalContainer :: PrimeIterator ::operator*(){return 0;} 
bool MagicalContainer:: PrimeIterator::  operator==(const PrimeIterator& other) const {return false;}
bool MagicalContainer:: PrimeIterator :: operator!=(const PrimeIterator& other) const{return false;}
bool MagicalContainer:: PrimeIterator :: operator<(const PrimeIterator& other) const {return false;}
bool MagicalContainer:: PrimeIterator :: operator>(const PrimeIterator& other) const{return false;}
            
