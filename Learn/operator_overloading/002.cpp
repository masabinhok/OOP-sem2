/*
4.3 Operator overloading using member operator functions
---when an operator is overloaded as a member function, the object of the class act as one of the operand, implicity passed as this.
---the function is a member of the class, and typically one parameter is passed for the binary operators and none for the unary operators.
*/


#include <iostream>
using namespace std;

class Point {
  private :


  public: 
    int x, y;
    Point(int x= 0 , int y = 0) : x(x), y(y){}

    Point operator + (Point & obj){
      return Point(x+obj.x, y+obj.y);
    }
};

class Count {
  public :
    int c;
    Count(int c = 0) : c(c){}

    Count operator ++(){
      return Count(c+1);
    }
};


int main () {
  Point p1(1, 2);
  Point p2(1,3);
  p1 = p1  + p2 ;
  cout << p1.x << " "<< p1.y<<endl;


  Count c1;
  c1 = ++c1;
  cout << "Wtf: "<<  c1.c << endl;
  return 0;
  
}

