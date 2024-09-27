#include <iostream>
#include <fstream>
using namespace std;

//fstream gives you access to three important classes: ofstream: to write to files, ifstream: to read from files and fstream: both read and write.


struct Student{
  string name;
  int roll;
  string fac;
};

int main () {
  Student s[3];
  ofstream outFile("student.txt");

  if(outFile.is_open()){
    for(int i = 0; i < 3; i++){
    cout<<"Name: ";
    cin>> s[i].name;
    outFile << s[i].name<<endl;
    cout<<"Roll: ";
    cin>> s[i].roll;
    outFile << s[i].roll<<endl;
    cout<<"Faculty: ";
    cin>> s[i].fac;
    outFile << s[i].fac<<endl;
    outFile << "-----------------" << endl;
  }
    outFile.close();
  }
  else{
    cout<<"Could not open file"<<endl;
  }

  ifstream inFile("student.txt");
  string line;

  if(inFile.is_open()){
    while(getline(inFile, line)){
      cout<< line << endl;
    }
    inFile.close();
  }
  else{
    cout<<"couldnot open the file!"<<endl;
  }
  return 0;
}

