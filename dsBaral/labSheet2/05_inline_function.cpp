#include <iostream>
using namespace std;

inline float tax(float salary){
  return salary - (0.1*salary);
}

int main () {
  int salary;
  cout<<"Enter your salary: "<<endl;
  cin>>salary;
  cout<<"There is a 10% tax deduction to your salary!"<<endl;
  cout<<"Your net payment is: "<<tax(salary)<<endl;
  return 0;
}