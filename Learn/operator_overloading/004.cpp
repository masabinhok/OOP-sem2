/*
4.5 Unary Operator Overloading
Unary operators like ++ -- + - 
*/

#include <iostream>
using namespace std;

class Counter {
  private: 
    int count ;

  public: 
    Counter () : count(0) {}
  
  //overload the pre increment operator
  Counter & operator ++ (){
    ++count;
    return *this;
  }

  //overload the post increment operator
  Counter operator++(int){
    Counter temp = *this;
    ++count;
    return temp;
  }

};