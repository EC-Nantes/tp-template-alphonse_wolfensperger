//
//  point_template.h
//  TP3_Template
//
//  Created by Frederic ALPHONSE on 28/11/2022.
//

#include <stdexcept>
#include <iostream>

using namespace std;

template <typename T>
class pointT;

//Surcharge de l'opérateur
template <typename T>
std::ostream& operator<<(std::ostream &, pointT<T> const&);

//Déclaration de la classe pointT
template<typename T> 
class pointT {
  //attributs
  protected:
    T x;
    T y;

  public:
    //Méthodes :
    //Constructeurs :
    pointT(T x,T y);
    pointT(pointT<T> const &P);

    //Accesseurs en lecture :
    T getX() const;
    T getY() const;

    //Accesseurs en ecriture :
    void setX(T x);
    void setY(T x);

    //Autres méthodes :
    T norm2() const;
    void translater(T x,T y);
    friend std::ostream& operator<< <T>(std::ostream &, pointT const&);
};

//Définition des différentes méthodes :
//Constructeurs :
template<typename T> 
pointT<T>::pointT(T x,T y){
    this->x = x;
    this->y = y;
 }

template<typename T> 
pointT<T>::pointT(pointT<T> const &P){
    this->x = P.x;
    this->y = P.y;
 }

//Accesseurs en lecture :
template<typename T> 
T pointT<T>::getX() const{
  return this->x;
}

template<typename T> 
T pointT<T>::getY() const{
  return this->y;
}

//Accesseurs en ecriture :
template<typename T> 
void pointT<T>::setX(T x){
  this->x = x;
}

template<typename T> 
void pointT<T>::setY(T y){
  this->y = y;
}

//Autres méthodes :
//fonction norm1 (bonus)
template<typename T>
T pointT<T>::norm2() const{
   return x*x+y*y;
}

template<typename T>
void pointT<T>::translater(T x, T y){
   this->x += x;
   this->y += y;
}

//Surcharge de l'opérateur cout pour afficher directement les caractéristique du point
template <typename T>
std::ostream& operator << (std::ostream &o, pointT<T> const &P)
{
  o<<"("<<P.getX()<<","<<P.getY()<<")"<<endl;
  return o;
}
