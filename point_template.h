//
//  Vehicule.hpp
//  TP3_Template
//
//  Created by Frederic ALPHONSE on 28/11/2021.
//

#include <stdexcept>
#include <iostream>

using namespace std;

template <typename T>
class pointT;

template <typename T>
std::ostream& operator<<(std::ostream &, pointT<T> const&);


template<typename T> 
class pointT {
  protected:
    T x;
    T y;
  public:
   pointT(T x,T y);
   pointT(pointT<T> const &P);
   T getX() const;
   void setX(T x);
   T getY() const;
   void setY(T x);
   T norm2() const;
   void translater(T x,T y);
   friend std::ostream& operator<< <T>(std::ostream &, pointT const&);
   //std::ostream& operator<<(std::ostream &, pointT<T> const &P);
};

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

template<typename T> 
 T pointT<T>::getX() const{
    return this->x;
 }

template<typename T> 
void pointT<T>::setX(T x){
    this->x = x;
 }

template<typename T> 
T pointT<T>::getY() const{
    return this->y;
 }

template<typename T> 
void pointT<T>::setY(T y){
    this->y = y;
}

template<typename T>
T pointT<T>::norm2() const{
   return x*x+y*y;
}
//pointT<T>::pointT(T x,T y)
/* template<typename T> 
pointT<T>::pointT(T x,T y){
    this->x = x;
    this->y = y;
 }*/
template<typename T>
void pointT<T>::translater(T x, T y){
   this->x += x;
   this->y += y;
}
  //Destructeur
  //virtual ~Point();

template <typename T>
std::ostream& operator << (std::ostream &o, pointT<T> const &P)
{
   o<<"("<<P.getX()<<","<<P.getY()<<")"<<endl;
  return o;
}

