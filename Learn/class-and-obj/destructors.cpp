#include <iostream>

using namespace std;

//destructors vaneko chai special member function ho, jo chai auto gets called when an obj is destroyed. it is used to perform cleanup tasks.

class Rectangle {
  public: 
  float width;
  float height;

  Rectangle(float w, float h){
    width = w;
    height =h ;

  }

  ~Rectangle(){
    cout<<"Rectangle obj is being destroyed!"<<endl;
  }

  float calculateArea(){
    return width * height;
  }
};

int main () {

  Rectangle r1(5.5, 10.0);
  float area = r1.calculateArea();
  cout<<"The area of rectangle is : "<<area<<endl;
  return 0;
}