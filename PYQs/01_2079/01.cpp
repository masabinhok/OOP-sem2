/* 
The drawsbacks of procedural programming are: 

1. Difficulty in managing complex systems
2. Code resusability is limited
3. Lack of Real world representation
4. Data insecurity
5. Code Scalability issues
6. Poor data-function relationship
*/

/*
The advantages of object oriented programming are:

1. Modularity through Classes
2. Code reusability with inheritance
3. Encapuslation for data security
4. Polymorphism enhances flexibility.
5. Real-world problem solving.
6. Easier maintenance and scalability.
7. Extensibility.
*/


#include <iostream>
using namespace std;


float calcSalaryPOP(float baseSalary, float bonus){
  return baseSalary + (bonus/100 * baseSalary);
}


class Employee {
  public: 
    float baseSalary;
    float bonus;

    float calcSalaryOOP(float baseSalary, float bonus){
      return baseSalary + (bonus/100 * baseSalary);
    }
};

int main () {
  // pop
  float baseSalary = 69000;
  float bonus = 10;
  float totalSalary = calcSalaryPOP(baseSalary, bonus);
  cout << "Salary in POP:"<< totalSalary<<endl;


  //oop
  Employee emp1, emp2;
  emp1.baseSalary = 342040;
  emp1.bonus = 12;
  cout<<"Total Salary in OOP emp1: "<< emp1.calcSalaryOOP(baseSalary, bonus)<<endl;
  
  emp2.baseSalary = 342040;
  emp2.bonus = 12;
  cout<<"Total Salary in OOP emp2: "<< emp2.calcSalaryOOP(baseSalary, bonus)<<endl;
  return 0;

}


