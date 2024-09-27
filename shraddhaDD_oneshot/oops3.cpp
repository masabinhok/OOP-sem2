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
    cout<<"Hi, initialize the values"<<endl;
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  }

  ~Student(){
    cout <<"Hi, I delete everythin!"<<endl;
    delete cgpaPtr; //deletes dynamicaaly allocated memory.
  }

  void getInfo(){
    cout << "Name: " << name << endl;
    cout << "CGPA: " << *cgpaPtr << endl;
  }
};


int main () {
  Student s1("Sabin", 9.9); 
  s1.getInfo();

  return 0;
}