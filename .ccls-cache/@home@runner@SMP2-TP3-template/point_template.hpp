//
//  Vehicule.hpp
//  TP3_Template
//
//  Created by Frederic ALPHONSE on 28/11/2021.
//
#ifndef point_template_hpp
#define point_template_hpp

#include <stdexcept>
#include <iostream>

using namespace std;

template<typename T>
class point {
  protected:
    T x;
    T y;

  public:
    point(T x,T y) {
      this->x = x;
      this->y = y;
    }
// .
  point(point const &p ) {
        this->x = p.x;
        this->y = p.y;
      }
    T getX() const {
      return this->x;
      }

    T getY() const {
          return this->y;
          }

    T setX(T xa) const {
          this->x =xa;
          }
    
    T setY(T ya) const {
          this->y = ya;
              }
};

#endif /* Vehicule_hpp */
