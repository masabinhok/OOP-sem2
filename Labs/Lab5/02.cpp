#include <iostream>
using namespace std;

class Inch {
  private: 
    float inch ;
  
  public: 
    Inch(float i){
      inch = i;
      }
    // class to basic type conversion
    operator float () {
      return inch / 12;
    }

    void display() {
      cout << inch << " inch"<<endl;
    }

};

int main () {
  Inch i(71);
  i.display();
  
  float feet = i;
  cout<< feet <<" feet"<<endl;
  return 0;

}