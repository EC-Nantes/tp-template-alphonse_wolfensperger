#include <iostream>
#include "point_template.h"
#include <stdio.h>
using namespace std;

void test_point_double(pointT<double> p, string point_name, double trans_x, double trans_y){
  cout<<point_name<<" : "<<p<<endl;
  p.translater(trans_x, trans_y);
  cout<<point_name<<" après translation de "<<trans_x<<" sur l'axe x et "<<trans_y<<" sur l'axe y : "<<p<<endl;
}

void test_point_int(pointT<int> p, string point_name, int trans_x, int trans_y){
  cout<<point_name<<" : "<<p<<endl;
  p.translater(trans_x, trans_y);
  cout<<point_name<<" après translation de "<<trans_x<<" sur l'axe x et "<<trans_y<<" sur l'axe y : "<<p<<endl;
}

int main() {
  pointT<double> p1(1.0, 2.0);
  pointT<int> p2(2,2);

  test_point_double(p1, "p1", 10, 1);
  test_point_int(p2, "p2", 10, 1);
}
