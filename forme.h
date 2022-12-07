
#ifndef FORME_H
#define FORME_H

#include "point.h"

template <typename T, typename U>
class forme;

//Surcharge de l'opérateur
template <typename T, typename U>
std::ostream& operator<<(std::ostream &, forme<T,U> const&);

//Déclaration de la classe pointT
template<typename T, typename U> 
class forme {
  //attributs
  protected:
    //Centre de la forme via un point
    pointT<T> p_ ;
  
  //Méthodes
  public:
    forme(pointT<T> p);

    virtual U surface() = 0;
    virtual U perimetre() = 0;
    friend std::ostream& operator<< <T>(std::ostream &, forme const&);
   //std::ostream& operator<<(std::ostream &, pointT<T> const &P);
};

//Constructeur en reutilisant la donnée point  de point.h
template<typename T, typename U> 
forme<T,U>::forme(pointT<T> p){
  this->p_ = p;
}


//Surcharge de l'opérateur cout pour afficher directement le centre 
template <typename T, typename U>
std::ostream& operator << (std::ostream &o, forme<T,U> const &F)
{
   o<<F.p_;
  return o;
}

#endif
