#include <iostream>
using namespace std;

float salaryRaise(float salary = 18000 , float increment = 12);

float salaryRaise(float salary, float increment){
  return salary + (increment/100 * salary);
}


int main (){
 cout<<"Displaying current monthly salary of employees: "<<endl;
  cout<<"CEO: "<<salaryRaise(35000, 9)<<endl;
  cout<<"Information Officer: "<<salaryRaise(25000, 10)<<endl;
  cout<<"System Analyst: "<<salaryRaise(24000)<<endl;
  cout<<"Programmer: "<<salaryRaise()<<endl;
  return 0;
}