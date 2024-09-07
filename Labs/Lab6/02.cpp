//function template overloading in cpp allows you to define multiple template functions with the same name but diff parameter types or numbers of parameters. 
#include <iostream>
using namespace std;


template <typename T>
void func(T a){
  cout << "Single argument: "<<a <<endl;
}


template <typename T>
void func(T a, T b){
  cout <<"Double argument: "<< a << " and "<< b<<endl;
}

template <typename T1, typename T2>
void func(T1 a, T2 b ){
  cout << "Different types of data: "<< a << " and "<< b<<endl;
}

int main () {
  func(1);
  func(1,2);
  func(1, 4.5);
  return 0;
}


