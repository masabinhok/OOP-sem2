//now lets see an example of conversion constructor in destination class


#include <iostream>
using namespace std;

//source
class Feet {
  private: 
    float feet;

  

  public: 
    Feet(float f){
      feet = f;
    }

    float getFeet() {
      return feet;
    }

    void display(){
      cout <<feet <<"feet"<<endl;
    }
};


//destination
class Meter  {
  private: 
  float meter;

  public: 
  Meter (Feet& f ){
    meter = f.getFeet() / 3.281;
  }

  void display() {
    cout <<meter <<"meter"<<endl;
  }

};


int main () {
  Feet f(71);
  f.display();

  Meter m = f;
  m.display();

  return 0;


}