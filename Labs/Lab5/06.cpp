#include <iostream >
using namespace std;

class Fahrenheit;
//source class
class Celcius{
  public :
  float c;

  Celcius(float c) : c(c){}

  void display(){
    cout <<c<<"*C"<<endl;
  }

  operator Fahrenheit();

};


//destination class
class Fahrenheit{
  public:
  float f;

  Fahrenheit(float f){
    this->f =  f;
  }

  void display() {
    cout<< f << "*F"<<endl;
  }
};

Celcius::operator Fahrenheit() {
  return Fahrenheit(c * 9/5 + 32);
};


int main () {
  Celcius c = 37;
  c.display();

  Fahrenheit f = c;
  f.display();

  return 0;

}
