//
//  carre.h
//  TP3_Template
//
//  Created by Frederic ALPHONSE on 28/11/2022.
#ifndef CARRE_H
#define CARRE_H

#include <stdexcept>
#include <iostream>

#include "rectangle.h"

using namespace std;

template <typename T, typename U>
class carre;

template <typename T, typename U>
std::ostream& operator<<(std::ostream &, carre<T,U> const&);

template <typename T, typename U>
class carre : public rectangle<T,U> {
 
protected:


public:
    carre(pointT<T> p, T c);
    friend std::ostream& operator<< <T>(std::ostream &, carre const&);
    
};

template <typename T, typename U>
carre<T,U>::carre(pointT<T> p, T c):rectangle<T, U>(p,c,c){}

template <typename T, typename U>
std::ostream& operator<<(std::ostream &o, carre<T,U> const &R)
{
   o<<"Centre du carre"<<R.p_<<"De cote = "<<R.l_<<std::endl;

  return o;

}

#endif
