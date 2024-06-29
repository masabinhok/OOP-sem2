#include <iostream>
using namespace std;
#include <conio.h>

float area(float r){
  return 3.14*r*r;
}

float area (float b, float h){
  return 0.5*b*h;
}

int area (int l , int w){
  return l*w;
}


int main () {
  float r,b, h; int l,w;
  

  cout<<"Enter the radius: "<<endl;
  cin>>r;
  cout<<"Area of circle = "<<area(r)<<endl;
  cout<<"Enter the base and height: "<<endl;
  cin>>w>>h;
  cout<<"Area of triangle = "<<area(b,h)<<endl;
  cout<<"Enter the length and breadth : "<<endl;
  cin>>l>>b;
  cout<<"Area of rectangle = "<<area(l, w)<<endl; 
}