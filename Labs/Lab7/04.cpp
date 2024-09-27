#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
  string name;
  string post;
  float salary;
};

int main () {
  Employee e[5];
  ofstream outFile("employee.bin", ios::binary);


  cout<<"Enter details for employee: "<<endl;
  if(outFile.is_open()){
    for(int i =0; i <5; i++){
      cout<<"Name: "<<endl;
      cin.ignore();
      getline(cin, e[i].name);

      cout<<"Post: "<<endl;
      cin.ignore();
      getline(cin, e[i].post);

      
    }
  }
}