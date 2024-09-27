#include <iostream>
using namespace std;
#include <fstream>


struct Person{
  string name;
  string gender;
  float age;
};

int main () {
  Person e[10];

  ofstream outFile("person.bat");
  cout<<"Enter the details of the employee: \n";

  if(outFile.is_open()){
    for(int i = 0; i <3; i++){
        cout<<"Name: ";
        cin>>e[i].name;
        outFile<<"Name: "<<e[i].name<<endl;
        cout<<"Gender: ";
        cin>>e[i].gender;
        outFile<<"Gender: "<<e[i].gender<<endl;
        cout<<"Age: ";
        cin>>e[i].age;
        outFile<<"Age: "<<e[i].age<<endl;
        
      outFile<<"--------------------------"<<endl;
  }
  outFile.close();
  }
  else {
    cout<<"Couldnot open the file!";
  }

  ifstream inFile("person.bat");
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