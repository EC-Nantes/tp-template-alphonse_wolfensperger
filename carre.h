//
//  carre.h
//  TP3_Template
//
//  Created by Frederic ALPHONSE on 28/11/2022.
#include <stdexcept>
#include <iostream>

#include "rectangle.h"

using namespace std;

template <typename T>
class carre;

template <typename T>
std::ostream& operator<<(std::ostream &, carre<T> const&);

template <typename T>
class carre : public rectangle<T> {
 
protected:
   //Les points du Carre
   //pointT<T> p;

public:
    carre(pointT<T> p, T c);
    pointT<T> getPoint() const;

    T getC() const;

    T surface() const;
    T perimetre() const;
    friend std::ostream& operator<< <T>(std::ostream &, carre const&);
    
};

template <typename T>
carre<T>::carre(pointT<T> p, T c){
   this->p = p; //attention copie superficielle
   this->h = c;
   this->l = c;
}

template <typename T>
T carre<T>::getC() const{
   return this->l;
}

template <typename T> 
pointT<T> carre<T>::getPoint() const{
   return this->p;
}

template <typename T> 
T carre<T>::surface() const{
  return ((this->l)^2);
}

template <typename T> 
T carre<T>::perimetre() const{
  return ((this->l)*4);
}

template <typename T>
std::ostream& operator<<(std::ostream &o, carre<T> const &R)
{
   o<<"("<<R.getPoint().getX()<<","<<R.getPoint().getY()<<"), "<<R.getC()<<std::endl;

  return o;

}