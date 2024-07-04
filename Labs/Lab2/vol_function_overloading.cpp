#include <iostream>
using namespace std;

int vol(int l){
  cout<<"Vol of cube is: "<<l*l*l<<endl;
}

int vol(int a, int b, int c){
  cout<<"Vol of cuboid is: "<<a*b*c<<endl;
}

float vol(float r, float h){
  cout<<"Vol of cylinder is: "<<3.14*r*r*h<<endl;
}

int main () {

  int l, a,b,c;
  float r, h;
  cout<<"Enter the lenght of cube:"<<endl;
  cin>>l;
  vol(l);
  cout<<"Enter the length breadth and height of cuboid: "<<endl;
  cin>>a>>b>>c;
  vol(a,b,c);
  cout<<"Enter the radius and height of cylinder:"<<endl;
  cin>>r>>h;
  vol(r,h);
  return 0;
}