#include <iostream>
#include <string>

using namespace std;

//multiple inheritance
class Student {
  public: 
    string name ;
    int rollno;
};

class Teacher {
  public: 
    string subject;
    double salary;
};

class TA : public Teacher, public Student{
  

};


int main (){
  TA t1;
  t1.name = "Tony";
  t1.salary = 3244;
  cout << t1.name<< endl << t1.salary <<endl;
  return 0;
}
