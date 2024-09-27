#include <iostream>
#include <string>

using namespace std;

//hierarchical inheritance

class Person {
  public :
  string name;
  int age;

};

class Student : public Person{
  public: 
    int rollno;
};

class Teacher : public Person {
  public: 
    string subject;
    double salary;
};




int main (){
  Teacher t1;
  Student s1;
  t1.name = "Tony";
  t1.salary = 3244;
  s1.name = "Stark";
  cout << t1.name<< endl << t1.salary <<endl << s1.name<<endl;
  return 0;
}
