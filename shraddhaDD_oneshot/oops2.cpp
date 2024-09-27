//shallow copy and deep copy..


#include <iostream>
#include <string>
using namespace std;


class Student 
{
  public:
  string name;
  double *cgpaPtr;

  //parameterized constructor
  Student(string name, double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  }

  Student (Student &obj){
    cout << "I am custom copy constructor, invoked sir!!" << endl;
    this->name = obj.name;
    // this->cgpaPtr = obj.cgpaPtr; //shallow copy, both objects will point to same memory location and changes in one object will reflect in another object
  
    cgpaPtr = new double; 
    *(this->cgpaPtr) = *(obj.cgpaPtr); //deep copy, both objects will point to different memory location and changes in one object will not reflect in another object
  }

  void getInfo(){
    cout << "Name: " << name << endl;
    cout << "CGPA: " << *cgpaPtr << endl;
  }
};


int main () {
  Student s1("Sabin", 9.9); 

  Student s2(s1);
  
  s1.getInfo();
  s2.getInfo();

  s2.name="Shraddha";
  *(s2.cgpaPtr) = 9.8;
  s1.getInfo();
  s2.getInfo();

  return 0;
}