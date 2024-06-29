#include <iostream>
using namespace std;



float caclRect(float l, float b, float &area, float &perimeter){
  area=l*b;
  perimeter=2*(l+b);
}

int main () {
  float l, b, area, perimeter;
  cout<<"Enter the length and breadth of rectangle: "<<endl;
  cin>>l>>b;
  caclRect(l,b,area, perimeter);
  cout<<"Area of rectangle = "<<area<<endl; 
  cout<<"Perimeter of rectangle = "<<perimeter<<endl;
  return 0;
  
}