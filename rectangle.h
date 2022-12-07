//
//  rectangle.h
//  TP3_Template
//
//  Created by Frederic ALPHONSE on 28/11/2022.

#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "forme.h"


template <typename T, typename U>
class rectangle;

template <typename T, typename U>
std::ostream& operator<<(std::ostream &, rectangle<T,U> const&);

template <typename T, typename U>
class rectangle : public forme<T,U>{
 
protected:
   //Les points du Rectangle
   T l_;
   T h_;

public:
    rectangle(pointT<T> p, T l, T h);
    
    U surface() ;
    U perimetre() ;
    friend std::ostream& operator<< <T,U>(std::ostream &, rectangle const&);    
};

template <typename T, typename U>
rectangle<T,U>::rectangle(pointT<T> p, T l, T h):forme <T,U>(p){
  this->p_ = p;
  this->h_ = h;
  this->l_ = l;
}

template<typename T, typename U> 
U rectangle<T,U>::surface() {
  U surf = (this->l_*this->h_);
  return surf;
}

template<typename T, typename U> 
U rectangle<T,U>::perimetre() {
  U peri = ((this->l_*2)+(this->h_*2));
  return peri;
}

template <typename T, typename U>
std::ostream& operator<<(std::ostream &o, rectangle<T,U> const &R)
{
   o<<"largeur"<<R.l_<<"hauteur"<<R.h_<<"point, "<<R.p_<<std::endl;

  return o;

}
#endif
