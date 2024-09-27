#include <iostream>
using namespace std;

class Shape { //abstract class enforces its derived classes to have a implementation of the pure virtual function anyhow, else it throws a error.
  virtual void draw() = 0;
};

class Circle : public Shape {
  public: 
  void draw() {
    cout <<"Drawing a circle"<<endl;
  }
};

class Rectangle : public Shape {
  public:
  void draw(){
    cout <<"I am sabin drawing a rectangle!"<<endl;
  }
};


int main () {
  Circle c1;
  Rectangle r1;
  c1.draw();
  r1.draw();
  
  return 0;
}