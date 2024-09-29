#include <iostream>
using namespace std;

//4.1 Overloadable and Non - Overloadable operators
/*
Overloadable : + - * / == != < > && || ! [] () ->
NonOverloadable: 
.(member access operator)
.*(pointer-to-member ascess)
::(scope resolution operator)
?:(ternary operator)
sizeof(object size determination)
typeid(runtime type information)
new, delete (global memory allocation)
*/

//4.2 Syntax of Operator Overloading
/*
  return_type operator symbol (argument_list){
    //implementation
  }
*/ 

class Complex {
  public: 
    int real, imag;
    Complex operator+(const Complex & obj){
      Complex result;
      result.real = real + obj.real;
      result.imag = imag + obj.imag;
      return result;
    }

};

int main () {
  Complex c1;
  c1.real = 3;
  c1.imag = -4;
  Complex c2;
  c2.real = 3;
  c2.imag = 4;
  Complex result ;
  result = c1 + c2;
  cout << result.real << " " << result.imag << endl;
  return 0;
}