#include <iostream>
using namespace std;
#include <fstream>


struct Employee{
  string name;
  string post;
  float salary;
};

int main () {
  Employee e[10];

  ofstream outFile("employee.txt");
  cout<<"Enter the details of the employee: \n";

  if(outFile.is_open()){
    for(int i = 0; i <3; i++){
        cout<<"Name: ";
        cin>>e[i].name;
        outFile<<"Name: "<<e[i].name<<endl;
        cout<<"Post: ";
        cin>>e[i].post;
        outFile<<"Post: "<<e[i].post<<endl;
        cout<<"Salary: ";
        cin>>e[i].salary;
        outFile<<"Salary: "<<e[i].salary<<endl;
        
      outFile<<"--------------------------"<<endl;
  }
  outFile.close();
  }
  else {
    cout<<"Couldnot open the file!";
  }

  ifstream inFile("employee.txt");
  string line;
  cout<<"Reading the data from the files: \n";

  if(inFile.is_open())
  {
    while(getline(inFile, line)){
      cout << line <<endl;
    }
    inFile.close();
  }

  else{
    cout<<"couldnot open the file!";
  }
  return 0;
}