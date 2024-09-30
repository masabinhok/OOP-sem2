#include <iostream>
using namespace std;
#include <fstream>
#include <string>



//standard manipulators are special functions that are used to format the input and output streams, these can be used to control the appeaance of output or influence hw input is processed. endl, setw, setprecision, setfill, fixed, scientific, hex, oct , dec


class Student {
  public : 
  int roll;
  string name;
  string address;
  double marks;

   void inputData() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display data
    void displayData() {
        cout << "Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }

  void writeInFile (string fileName) {
    ofstream outFile(fileName, ios::binary);
    if(!outFile){
      cout << "Error opening file!" <<endl;
    }
    outFile.write(reinterpret_cast<char*>(this), sizeof(Student));
    outFile.close();
    cout <<"Student data written to file."<<endl;
  }

  void readFromFile (string fileName) {
    ifstream inFile(fileName);
    Student student;
    if(!inFile){
      cout << "Error opening file!" <<endl;
    }
    string content;
    while (inFile.read(reinterpret_cast<char*>(&student), sizeof(student))){
      student.displayData();
    }
    inFile.close();
  }

  void searchByRoll(int roll){
    ifstream inFile("student.txt", ios::binary);
    Student student;
    bool found = false;

    while(inFile.read(reinterpret_cast<char*>(&student), sizeof(student))){
      if(student.roll == roll){
        cout << "student vetyo"<<endl;
        student.displayData();
        found = true;
        break;
      }

    }
    inFile.close();
  }
};

int main () {
  Student student;
  int roll;
  student.name = "Sabin";
  student.roll = 69;
  student.writeInFile("student.txt");
  cin >> roll;
  student.searchByRoll(69);
  return 0;
}