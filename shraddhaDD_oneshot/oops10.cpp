#include <iostream>
using namespace std;

void func (int x) {
  static int a = x; //single initialization...
  cout<<++a<<endl;
}

class StaticA {
  public: 
  static int count;

  StaticA(){
    count++;
  }
  void show() {
    cout << count <<endl;
  }
};

int StaticA::count = 0; //memory allocation independent to the object.

int main () {

  StaticA obj1;
  StaticA obj2;
  StaticA obj3;
  StaticA obj4;
  StaticA obj5;
  StaticA obj6;
  obj6.show();
  
  return 0;

}