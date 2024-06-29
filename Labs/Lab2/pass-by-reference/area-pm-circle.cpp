#include <iostream>
using namespace std;


const float pi = 3.14;

void calcCircle (float r, float &area, float &circumference) {
area = pi*r*r;
circumference=2*pi*r;
}

int main () {
  float r, area, circumference;
  cout<<"Enter the radius: "<<endl;
  cin>>r;
  calcCircle(r, area, circumference);
  cout<<"Area of circle = "<<area<<endl;
  cout<<"Circumference of circle = "<<circumference<<endl;
}