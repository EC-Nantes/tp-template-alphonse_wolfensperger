#include <iostream>
#include "point_template.h"
#include <stdio.h>
using namespace std;


int main() {
  cout << "Hello World!\n";
  pointT<double> p1(1.0, 2.0);
  pointT<int> p2(2,2);

  cout<<p1.getX()<<" "<<p1.getY()<<endl;
  cout<<p1.norm2()<<endl;
  cout<<p2.norm2()<<endl;
}