// basic to class type coversion: you typically define a consttuctor in the class that acceps the basic type.
#include <iostream>
using namespace std;


class Meter {
  private : 
    float meter;


  public: 
    Meter(float cm )
      {
        meter = cm / 100.0;
      }

    void display()
      {
    cout<<"The given length in meter is: "<<meter<< "m"<<endl;
      } 
};


int main () {
  float cm ;
  cout<<"Enter length in cm: "<<endl;
  cin>> cm ;
  cout<<"The given lenght in cm was: "<<cm<<"cm"<<endl;

  Meter m = cm ;
  Meter a = 132423 ;
  Meter b = 321424;
  m.display();
  a.display();
  b.display();
  return 0;
}
