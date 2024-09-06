#include <iostream>
#include <fstream>
using namespace std;

class student {
  public:
    char name[20], faculty[20];
    int id;

};


int main () {
  student s;
  ofstream outF("student.txt");
  cout<<"Enter the name, faculty and id of the student"<<endl;

  cin>>s.name>>s.faculty>>s.id;

  outF<<s.name<<endl<<s.faculty<<endl<<s.id<<endl;
  outF.close();
  ifstream inF("student.txt");
  inF>>s.name>>s.faculty>>s.id;
  cout<<"\nName :: "<<s.name<<"\nFaculty :: "<<s.faculty<<"\nId :: "<<s.id<<endl;
  inF.close();
  return 0;
  
}