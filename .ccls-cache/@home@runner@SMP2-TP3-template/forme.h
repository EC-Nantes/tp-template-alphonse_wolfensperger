#include <stdexcept>
#include <iostream>

#include "point_template.h"
using namespace std;


template <typename T>
class forme;

//Surcharge de l'opérateur
template <typename T>
std::ostream& operator<<(std::ostream &, forme<T> const&);

//Déclaration de la classe pointT
template<typename T> 
class forme {
  //attributs
  protected:
    //Centre de la forme via un point
    pointT<T> p ;
    

  //Méthodes
  public:
    forme(pointT<T> p);
    forme<T> getPoint() const;

    virtual T surface() = 0;
    virtual T perimetre() = 0;
    friend std::ostream& operator<< <T>(std::ostream &, forme const&);
   //std::ostream& operator<<(std::ostream &, pointT<T> const &P);
};

//Définition des différentes méthodes
template<typename T> 
forme<T>::forme(pointT<T> p){
    this->p = p;

 }

template<typename T> 
T forme<T>::perimetre(){
    
 }

template<typename T> 
T forme<T>::surface(){
    
 }


//Surcharge de l'opérateur cout pour afficher directement le centre 
template <typename T>
std::ostream& operator << (std::ostream &o, forme<T> const &F)
{
   o<<"("<<F.getX()<<","<<F.getY()<<")"<<endl;
  return o;
}

