#include <iostream>
#include <string>
using namespace std;

class Person 
{
  public:
    string name;
    int age;

  //default compiler le call gardinxa..
  Person () {
      cout<< "I am a parent CONSTRUCTOR, so I am called first."<<endl;
  }

  //parameterized constructor should be called ourselves, in the base class.
  Person (string name, int age){
    cout<<"I am a parameterized parent constructor."<<endl;
    this->name = name;
    this->age = age;
  }

  ~Person () {
      cout<< "I am a parent DESTRUCTOR"<<endl;
  }
};

class Student : public Person {
  public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)  {
      this->rollno = rollno;
      cout<< "I am a child constructor"<<endl;
    }
    ~Student () {
      cout<< "I am a child DESTRUCTOR"<<endl;
    }

};

class Graduate : public Student  {
  public:
    string researchArea;

    Graduate(string name, int age, int rollno, string researchArea) : Student(name, age, rollno){
      this->researchArea= researchArea;
    }

      void getInfo(){
      cout << "Name: "<< name << endl;
      cout << "Age: "<< age << endl;
      cout << "Rollno: "<< rollno << endl;
      cout<< "Research Area: "<< researchArea <<endl;
    }
};

int main (){
  Graduate s1("Sabin", 19, 23, "4th dimension.");
  s1.getInfo();
  return 0;

}