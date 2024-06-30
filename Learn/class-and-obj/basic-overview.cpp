#include <iostream>
using namespace std;

class ClassName{
  //data members
  public:
  int attribute1;
  float attribute2;

  //member functions (methods)
  void method(){
    cout<<"Hello World!"<<endl;
  }

  int method2(int param){
    return param;
  }

};

int main () {
  //create object named obj: which is simply a instance of class ClassName
  ClassName obj;
  obj.method();
  cout<<obj.method2(5)<<endl;
  return 0;

}

