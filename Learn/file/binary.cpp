#include <fstream>
#include <iostream>
using namespace std;

class Student {
  private: 
  char name[20] ,fac[20];
  int id;

  public :
  void input ()
  {
    cout<<"Enter the name faculty and id of the student"<<endl;
    cin>>name>>fac>>id;
  }
  void display(){
    cout<<"Name: "<<name<<"\nFaculty: "<<fac<<"\nId: "<<id<<endl;
  }
};
int main () {
  Student s;
  ofstream outf("binaryStd.txt");
  s.input();
  outf.write();
  outf.close();

  ifstream inf("binaryStd.txt");
  inf.read();
  s.display();
  inf.close();
  return 0;
}