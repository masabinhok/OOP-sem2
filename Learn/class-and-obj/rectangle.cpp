#include <iostream>
using namespace std;

class Rectangle {
  public:
  //Data members
  float width;
  float height;

  //member functions to calculate the area

  float calculateArea()  {
    return width * height;
  }
};


int main () {
  //obj banauxu class Rectangle
  Rectangle r1;

  //value dinxu respective data memebers lai
  r1.width = 5;
  r1.height = 10;
  float area = r1.calculateArea();
  cout<<"The area of rectangle is: "<<area<<endl;
  return 0;
}


// code explain garnu parda, rectangle ko duita data members xa widht ra height, calcArea chai member function vayo jasle area return garxa, ani we can call this function in main function as a method on any object of className Rectangle and caluculate the area....


//object create garxau, r1; we can create any number of objects, r1 is and obj of Rectangle class and we set the height and width of r1 also called the method calcArea() to calculate and display the area.....