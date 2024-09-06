#include <iostream>
using namespace std;

class Feet {
  protected : 
  float feet;

  public: 
  void input () {
    cout<< "Enter feet: "<<endl;
    cin >> feet;
  }
};

class Meter: public Feet{
  private:
  float meter;

  public: 
  void calcMeter () {
    meter = feet /3.281;
    cout << meter <<endl;
  }


};

int main () {
  Meter m ;
  m.input();
  m.calcMeter();
  return 0;
}