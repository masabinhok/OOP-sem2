#include <iostream>
#include <iostream>
using namespace std;

class Polymorphism {
  public:
    void func () {
      cout << "func 1"<<endl;
    }

    void func(int a){
      cout << "func 2 "<< a <<endl;
    }

    void func(char a){
      cout << "func 3 " << a <<endl;
    }
};

int main () {
  Polymorphism p1;
  p1.func();
  p1.func(1);
  p1.func('a');
  return 0;
}