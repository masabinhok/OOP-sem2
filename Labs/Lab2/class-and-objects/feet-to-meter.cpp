#include <iostream>
using namespace std;


class Feet{
  private:
    float feet;

  public:
    void getFeet(){
      cout<<"Enter the distance in feet: ";
      cin>>feet;
    }

    float displayMeters(){
      return feet*0.3048;
    }
};

int main () {
  Feet f1;
  f1.getFeet();
  cout<<"The distance in meters is: "<<f1.displayMeters()<<endl;
  return 0;
}