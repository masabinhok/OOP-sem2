#include <iostream>
using namespace std;

template <class T>

class Stack{
  private: 
  T arr[5]; // fixed array size;
  int tos; // top of stack

  public: 
  Stack(){
    tos = -1;
  }

  void push(T data){
    if(tos >= 4){
      throw overflow_error("Stack overflow: Cannot push to a full stack");
    }
    arr[++tos] = data;
  }

  T pop(){
    if(tos < 0){
      throw underflow_error("Stack underflwo: Cannot pop from an empty stack.");
    }
    return arr[tos--];
  }
};

int main () {
  Stack <int> intStack;
  Stack <float> floatStack;

  intStack.push(1);
  intStack.push(2);


  cout << "Top of the stack is: "<< intStack.pop()<<endl;
  
  floatStack.push(1.0);
  floatStack.push(2.5);


  cout << "Top of the stack is: "<< floatStack.pop()<<endl;

}