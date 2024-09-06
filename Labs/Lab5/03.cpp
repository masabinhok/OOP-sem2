// Class to class conversion, dui tarika le hunxa, k k conversion operator in source class, arko conversion constructor in destination class.
// aba source class ra destination class kasari chinne, naam nai kaafi xa. meter to feet c2c xa vane ofcourse meter is the source class and feet is the destination class because we are convertin meter into feet.

// lets see an example of conversion operator in source class;

#include <iostream>
using namespace std;


class DistanceInFeet; //pahilai declaration garnu pardo raixaa.

//source class
class DistanceInMeter {
  private : 
  float meter;

  public: 
    DistanceInMeter (float m )
      {
        meter = m ;
      }

    void display(){
      cout << meter<< "meter" <<endl;
    }
  //conversion operator.
  operator DistanceInFeet();
};


//destination class
class DistanceInFeet {
  private:
  float feet; 

  public: 
  DistanceInFeet (float f){
    feet = f;
  }

  void display () {
    cout << feet << "feet"<<endl;
  }
};


// using this after the distance in feet is fully defined.
DistanceInMeter::operator DistanceInFeet() {
  return DistanceInFeet(meter * 3.281);
}


int main () {
  DistanceInMeter d_m(10);
  d_m.display(); //10;

  DistanceInFeet d_f = d_m;
  d_f.display(); // 32.81;
  return 0;

}