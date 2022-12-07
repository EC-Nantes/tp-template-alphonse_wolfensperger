//
//  rectangle.h
//  TP3_Template
//
//  Created by Frederic ALPHONSE on 28/11/2022.
#include <stdexcept>
#include <iostream>

#include "forme.h"

using namespace std;
template <typename T>
class rectangle ;

template <typename T>
std::ostream& operator<<(std::ostream &, rectangle<T> const&);

template <typename T>
class rectangle : virtual public forme<T>{
 
protected:
   //Les points du Rectangle
   T l;
   T h;

public:
    rectangle(forme<T> p, T l, T h);
    forme<T> getPoint() const;
    T getL() const;
    T getH() const;
    T surface() const;
    T perimetre() const ;
    friend std::ostream& operator<< <T>(std::ostream &, rectangle const&);    
};

template <typename T>
rectangle<T>::rectangle(forme<T> p, T l, T h){
   this->p = p; //attention copie superficielle
   this->h = h;
   this->l = l;
}

template <typename T>
T rectangle<T>::getL() const{
   return this->l;
}

template <typename T>
T rectangle<T>::getH() const{
   return this->h;
}

template <typename T> 
forme<T> rectangle<T>::getPoint() const{
   return this->p;
}

template<typename T> 
T rectangle<T>::surface() const{
  return (this->l*this->h);
}

template<typename T> 
T rectangle<T>::perimetre() const{
  return (this->l*2+this->h*2);
}

template <typename T>
std::ostream& operator<<(std::ostream &o, rectangle<T> const &R)
{
   o<<"("<<R.getPoint().getX()<<","<<R.getPoint().getY()<<"), "<<R.getH()<<", "<<R.getL()<<std::endl;

  return o;

}
