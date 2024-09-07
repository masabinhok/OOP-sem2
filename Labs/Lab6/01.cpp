//templates are a powerful feature that allows you to write generic, reusable code. instead of writing the same code for different data types,templates let you create functions or classes that work with any data type.


//template pani dui tarikako hunxa, 
//function template, class template.

//function templates let you write a generic function that can work with any data type.

/*
syntax: 
  template <typename T>
  T add(T a, T b){
  return a + b;
  }
*/


#include <iostream>
using namespace std;

template <typename great>

great greatestAmong(great a, great b){
  if(a>b)
  cout<<a<<endl;
  else 
  cout <<b <<endl;
}

int main () {
  greatestAmong(3, 4);
  greatestAmong(3.4, 5.7);
  greatestAmong(4235983238590283590, 859328579034772394);
  return 0;
}


