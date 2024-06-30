#include <iostream>
using namespace std;

//we will be calculating the area of a rectangle with a construtor this timeee,


class Rectangle {
  public:
  //data members
  float width;
  float height;

  //Constructor to initialize data membersss...
  Rectangle(float w, float h){
    width = w;
    height = h;
  }

  //member functions to calculate the area
  float calculateArea () {
    return width * height;
  }


};

int main (){
  //create an obj of class Rectangle using the constructorrr.
  Rectangle r1(5.5, 10.0);

  float area = r1.calculateArea();
  cout<<"The area of rectangle is: "<<area<<endl;
  return 0;

}



//explaination of the codee:

// rectangle class sanga chai euta constructor xa jasle width ra height lai initialize garxa, aginai chai obj1.data1 = garera initialize garnu parthyo vane aile sidhai constructor bata value pass garera garna milxaaa..

//kunai euta obj create garepaxi teslai constructor bata value pass initialize garna milxa....

