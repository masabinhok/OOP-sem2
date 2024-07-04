#include <iostream>
using namespace std;
#include <conio.h>

float area(float r){
  return 3.14*r*r;
}



float area (float l , float w){
  return l*w;
}


float area (float b, float h, float &a){
  a=0.5*b*h;
}

int main () {
  float r,b, h, l,w, a;
  

  cout<<"Enter the radius: "<<endl;
  cin>>r;
  cout<<"Area of circle = "<<area(r)<<endl;
  cout<<"Enter the base and height: "<<endl;
  cin>>b>>h;
  area(b, h, a);
  cout<<"Area of triangle = "<<a<<endl;
  cout<<"Enter the length and breadth : "<<endl;
  cin>>l>>w;
  cout<<"Area of rectangle = "<<area(l, w)<<endl; 
}