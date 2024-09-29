/*
4.4 Operator overloading using non member functions
---overloading << >> operators, first operand is not an obj of the class.
-- declared as friend functions to allow access to private members of the class.
*/

#include <iostream>
using namespace std;

class Complex {
  private : 
  int real , imag;

  public: 
  Complex(int r= 0, int i = 0) : real(r), imag(i){}

  //friend the non member function so that it can access the private member of the object.
  friend ostream& operator << (ostream& os, const Complex& c);

  friend istream & operator >> (istream &is, Complex &c);
};

//non member function, overloading "<<" operator
ostream& operator << (ostream& os, const Complex&c)
{
  os << c.real << " + " << c.imag << "i";
}

istream & operator >> (istream &is, Complex &c){
  cout << "Enter real part: ";
  is >> c.real;
  cout << "Enter imaginary part: ";
  is >> c.imag;
  return is;
}

int main () {
  Complex c1;
  cin >> c1;
  cout << c1 << endl;
}

