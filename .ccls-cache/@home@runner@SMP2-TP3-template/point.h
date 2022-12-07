//
//  point_template.h
//  TP3_Template
//
//  Created by Frederic ALPHONSE on 28/11/2022.
//
//
#ifndef POINT_H
#define POINT_H

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
    T x_;
    T y_;

  public:
    //Méthodes :
    //Constructeurs :
    pointT(T x = 0,T y = 0);
    pointT(pointT<T> const &p);

    //Accesseurs en lecture :
    T getX() const;
    T getY() const;

    //Accesseurs en ecriture :
    void setX(T x);
    void setY(T x);

    //Autres méthodes :
    void translater(T x,T y);
    friend std::ostream& operator<< <T>(std::ostream &, pointT const&);
};



//Définition des différentes méthodes :
//Constructeurs :
template<typename T> 
pointT<T>::pointT(T x,T y){
    this->x_ = x;
    this->y_ = y;
 }

template<typename T> 
pointT<T>::pointT(pointT<T> const &p){
    this->x_ = p.x_;
    this->y_ = p.y_;
 }

//Accesseurs en lecture :
template<typename T> 
T pointT<T>::getX() const{
  return this->x_;
}

template<typename T> 
T pointT<T>::getY() const{
  return this->y_;
}

//Accesseurs en ecriture :
template<typename T> 
void pointT<T>::setX(T x){
  this->x_ = x;
}

template<typename T> 
void pointT<T>::setY(T y){
  this->y_ = y;
}

template<typename T>
void pointT<T>::translater(T x, T y){
   this->x_ += x;
   this->y_ += y;
}

//Surcharge de l'opérateur cout pour afficher directement les caractéristique du point
template <typename T>
std::ostream& operator << (std::ostream &o, pointT<T> const &P)
{
  o<<"("<<P.getX()<<","<<P.getY()<<")"<<endl;
  return o;
}

#endif
//POINT_TEMPLATE_H