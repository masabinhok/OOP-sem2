#include <iostream>
using namespace std;


class Shape {
  public:
  virtual void Draw() = 0;
};

class Rectangle : public Shape
{
  public:
    void Draw () {
      cout<< "Rectangle"<<endl;
    }
};

class Circle : public Shape
{
  public:
    void Draw () {
      cout<< "Circle"<<endl;
    }
};

class Triangle : public Shape
{
  public:
    void Draw () {
      cout<< "Triangle"<<endl;
    }
};

int main () {
  // Shape shape; // yo mildaina sathiharu, kinaki abstract class ko instance banauna mildainaaaaa
  Shape* shapes[2]; //yo instance haina, it allows the pointer to point to an object of a derived class that implements all the pure virutall functions;

  shapes[0] = new Circle(); // it should point to objects of derived classes that implement the pure virutal function.
  shapes[1] = new Rectangle();

  for(int i = 0 ; i <=1; i++){
    shapes[i]->Draw();
  }

  Shape* shapePtr = new Triangle();
  // (*shapePtr).Draw();
  //similar to this, we use -> operator which does two jobs on its own, it dereference the pointer and access the member,
  shapePtr->Draw();

  return 0;
  
}
