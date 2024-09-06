#include <iostream>
#include <fstream>
using namespace std;

class employee {
  public:
    char name[20], post[20];
    int salary;

};


int main () {
  employee e[15];
  ofstream outF("employee.txt");

  cout<<"Enter the name, post and salaray of 15 employee::\n"<<endl;
  for(int i =0; i<15; i++){
    cin>>e[i].name>>e[i].post>>e[i].salary;
    outF<<e[i].name<<endl<<e[i].post<<endl<<e[i].salary<<endl;
  }
  outF.close();

  ifstream inF("employee.txt");
  cout<<"Here are the data of your employeess:: "<<endl;
    for(int i =0; i<15; i++){
      inF>>e[i].name>>e[i].post>>e[i].salary;
      cout<<"\nName :: "<<e[i].name<<"\nPost :: "<<e[i].post<<"\nSalary :: "<<e[i].salary<<endl;
  }
  inF.close();
  return 0;
  
}