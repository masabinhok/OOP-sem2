#include <iostream>
using namespace std;

class Two;

class One {
  private:
  int a;

  public:
  void getInput() {
    cout<<"Enter a: "<<endl;
    cin >> a;
  }

  void display(){
    cout<<"a before swap: "<<a<<endl;
  }

  friend void swapNumbers(One &o, Two &t);

};
class Two {
  private:
  int b;

  public:
  void getInput() {
    cout<<"Enter b: "<<endl;
    cin >> b;
  }
    void display(){
    cout<<"b before swap: "<<b<<endl;
  }

  friend void swapNumbers(One &o, Two &t);

};


void swapNumbers(One &o, Two &t){
  int temp = o.a;
  o.a = t.b;
  t.b= temp;
}


int main () {
  One o1;
  Two t1;
  o1.getInput();
  t1.getInput();

  o1.display();
  t1.display();
    cout<<"Swapping..."<<endl;
    swapNumbers(o1, t1);

      o1.display();
  t1.display();
  return 0;
}



//in case of friend class, if we declare a class a friend, the class can access my data but i can't.