//Nos bibliothèques
#include <iostream>
#include <stdio.h>
#include "carre.h"
using namespace std;

//Auteurs : F.ALPHONSE & R.WOLFENSPERGER
//Promo : SEC2024

//Jeu d'essais pour présenter nos résultats
void test_point(){
  cout<<"----------------------"<<"Test Function 1"<<"----------------------"<<endl;
  pointT<double> point1(2.0,3.0);
  cout<<"Affichage Point"<<point1<<endl;
  cout<<"--------------------------------------------"<<endl<<endl;
}

void test_translater(){
  cout<<"----------------------"<<"Test Function 2"<<"----------------------"<<endl;
  pointT<double> point1(2.0,3.0);
  cout<<"Point Avant Translation :"<<point1<<endl;
  point1.translater(5, 5);
  cout<<"Point Après translation de x :(5) et y :(5) "<<point1<<endl;
  cout<<"--------------------------------------------"<<endl<<endl;
}

void test_rectangle(){
  cout<<"----------------------"<<"Test Function 3"<<"----------------------"<<endl;
  pointT<int> point1(2.0,3.0);
  cout<<"Point :"<<point1<<endl;
  
  int largeur = 5;
  int hauteur = 3;
  
  rectangle<int, int> rectanglees(point1,largeur,hauteur);
  cout<<"Après la construction d'un rectangle ( largeur = 5 et hauteur = 3): "<<point1<<endl;
  
  cout<<"Calcul du périmètre :"<<rectanglees.perimetre()<<endl;
  cout<<"Calcul de la surface :"<<rectanglees.surface()<<endl;
  cout<<"--------------------------------------------"<<endl<<endl;
}

void test_carre(){
  cout<<"----------------------"<<"Test Function 3"<<"----------------------"<<endl;
  pointT<int> point1(2.0,3.0);
  cout<<"Point :"<<point1<<endl;
  
  int cote = 5;
  
  carre<int,int> carrees(point1,cote);
  cout<<"Après la construction d'un carre ( cote = 5): "<<point1<<endl;
 
  cout<<"Calcul du périmètre carrée:"<<carrees.perimetre()<<endl;
  cout<<"Calcul de la surface carrée:"<<carrees.surface()<<endl;
  cout<<"--------------------------------------------"<<endl<<endl;
}

//Test swap à faire

int main() {
  test_point();
  test_translater();
  test_rectangle();
  test_carre();
  
}
