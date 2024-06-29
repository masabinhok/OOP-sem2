#include <iostream>
using namespace std;

const float pi = 3.14169;

int main () {
  float r, h;
  float tsa, csa, vol;
  cout<<"Enter the radius and height of cylinder: "<<endl;
  cin>>r>>h;
  tsa = 2 * pi * r * (r + h);
  csa = 2 * pi * r * h;
  vol = pi * r * r * h;
  cout<<"Total surface area of cylinder = "<<tsa<<endl;
  cout<<"Curved surface area of cylinder = "<<csa<<endl;
  cout<<"Volume of cylinder = "<<vol<<endl;
  return 0;

}