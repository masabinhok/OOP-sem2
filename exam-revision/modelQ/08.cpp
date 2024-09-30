//We can achieve generic programming with the help of templates in cpp. Templates are the powerful feature of cpp which lets us make functions, classes and objects without caring about their datatype and a generic one which helps us write clean and reusable code.


#include <iostream>
using namespace std;

template <typename T>

T avg(T a, T b){
  return static_cast<T>((a+b)/2.0);
}

template <typename T>

T mul(T a, T b){
  return a*b;
}

int main () {
  int intAvg = avg(3, 4);
  double doubleAvg = avg(5.6, 7.2);
  int intMul= mul(3, 4);
  double doubleMul = mul(5.6, 7.2);
  cout << intAvg << endl << doubleAvg << endl << intMul << endl << doubleMul << endl;
}