#include <iostream>
#include <string>
using namespace std;

class Teacher {
  //properties/attributes
  private:
    double salary;

  public:
    string name;
    string dept;
    string subject;

    //non  parameterized constructor
    Teacher() {
      dept = "CSE";
    }

    //parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
      this->name = name;
      this->dept = dept;
      this->subject = subject;
      this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &orgObj){
      cout<<"I am Cutsom copy constructor, invoked sir!!"<<endl;
      this->name = orgObj.name;
      this->dept = orgObj.dept;
      this->subject = orgObj.subject;
      this->salary = orgObj.salary;
    }

  //methods/member functions
  void changeDept(string newDept) {
    dept = newDept;
  }

  void getInfo()
{
    cout << "Name: " << name << endl;
    cout << "Department: " << dept << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << salary << endl;
}
  //to access privated salary
  //setter
  void setSalary(double s){
    salary = s;
  }
  
  //getter
  double getSalary(){
    return salary;
  } 

};

class Account {
  //data hiding
  private: 
    double balance;
    string password;  

  public: 
    string accountId;
    string username;
};

int main () {
  //for non parameterized constructor
  Teacher t1;
  t1.name = "Shraddha";
  t1.subject = "OOPS";
  t1.setSalary(50000);
  t1.getInfo();
  t1.changeDept("ECE");
  cout<< "After changing dept:\n";
  t1.getInfo();

  //concept of pointer.
  int x = 10;
  int *ptr = &x;
  cout << "Value of x: " << *ptr << endl;
  cout << "Address of x: " << ptr << endl;

  //for parameterized constructor
  Teacher t2("Sabin", "ECE", "C++", 500000);
  t2.changeDept("CSE");
  t2.getInfo();

  //copy constructor
  Teacher t3(t2); //default copy constructor is invoked.
  t3.getInfo();
  t2.changeDept("ECE");
  t3.getInfo();
  Teacher t4(t2);
  t4.getInfo();

  return 0;
}