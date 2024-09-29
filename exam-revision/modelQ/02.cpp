// Q2. Define reference variable. Explain inline function with suitable eexample. Write a suitable program to show the concept of pass by reference and return by reference.


/*
Referene variable in C++ is an alias, or an alternative name, for an already existing variable. Once a reference variable is initialized with a variable, it becomes another name for that variable, meaning any operaation on the reference variable is actually performed on the original variable. 
*/

#include <iostream>
using namespace std;


// inline function is simply a short function with a keyword inline infront of its declaration which simply replaces the function call with the function logic itself, saving time and memoryy.
inline int add(int a, int b){
  return a+b;
}


// here we are passing the reference of a and b instead of their value, so when we are changing the value of the variable inside the function it is reflected outside of the function too without having to return the value, because with the reference we can directly alter the actual value.
void swap(int &a, int &b){
  int t;
  t = a;
  cout << t << endl;
  a= b;
  cout << a << endl;
  b = t;
  cout << b << endl;
}

//return by reference, the ampersand sign before the function_name makes it return by reference, it first takes the reference as a param, and then return the param pointing to the memory address of the param, and in the function call it behaves as a memory location or a variable which can be assigned some value, and it will be assigned to the parameter itself.
int & rref(int &a){
  return a;
}


int main () {
  cout << add(1, 5)<<endl;
  int a = 5;
  int b = 6;
  //swap pass by reference
  cout << a << " " << b <<endl;
  swap(a, b);
  cout << a << " " << b <<endl;

  //return by reference
  int x = 69;
  cout << "Before rref: "<< x <<endl;
  rref(x) = 96; //function call is on the left side, and can be assigned some value because reference to some variable is being returned by the function.
  cout << "After rref: "<< x <<endl;
  return 0;
}