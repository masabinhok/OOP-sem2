#include <iostream >
#include <math.h>
using namespace std;

class Polar {
  public: 
  float radius;
  float angle;

  Polar(float r, float w){
    radius = r;
    angle = w;
  } 

  void display() {
    cout << "("<<radius <<","<< angle<< ")"<<endl;
  }
};


class Rect {
  private : 
  float x;
  float y;

  public:

  Rect (Polar& p){
    x = p.radius * cos(p.angle *3.14/180);
    y = p.radius * sin(p.angle *3.14/180);
  }

  void display(){
    cout << "("<<x <<","<< y<< ")"<<endl;
  }


};

int main () {
  Polar p(1, 30);
  p.display();

  Rect r = p;
  r.display();
  return 0;
  

}