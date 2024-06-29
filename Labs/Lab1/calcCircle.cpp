#include <iostream>
using namespace std;


void calcCicle (float r){
  cout<<"The area of circle is:"
<<3.14*r*r<<endl;
cout<<"The circumference of circle is:"<<2*3.14*r;}

int main () {
  float r;
  cout<<"Enter the radius of circle: "<<endl;
  cin>>r;
  calcCicle(r);
}