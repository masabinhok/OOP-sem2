#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
    int roll;
    char name[50];
    char address[100];
    float marks;

public:
    // Function to input student details
    void input() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter address: ";
        cin.getline(address, 100);
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display() const {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Marks: " << marks << endl;
    }

    // Function to get the roll number of the student
    int getRoll() const {
        return roll;
    }

    // Function to write student details to binary file
    void writeToFile() {
        ofstream outFile("students.dat", ios::binary | ios::app);
        if (!outFile) {
            cerr << "Error: Could not open the file!" << endl;
            return;
        }
        outFile.write(reinterpret_cast<const char*>(this), sizeof(*this));
        outFile.close();
    }

    // Function to read all student details from binary file
    static void readFromFile() {
        ifstream inFile("students.dat", ios::binary);
        if (!inFile) {
            cerr << "Error: Could not open the file!" << endl;
            return;
        }

        Student student;
        while (inFile.read(reinterpret_cast<char*>(&student), sizeof(student))) {
            student.display();
            cout << "------------------------" << endl;
        }
        inFile.close();
    }

    // Function to search for a student by roll number
    static void searchByRoll(int rollNo) {
        ifstream inFile("students.dat", ios::binary);
        if (!inFile) {
            cerr << "Error: Could not open the file!" << endl;
            return;
        }

        Student student;
        bool found = false;
        while (inFile.read(reinterpret_cast<char*>(&student), sizeof(student))) {
            if (student.getRoll() == rollNo) {
                cout << "Record found:" << endl;
                student.display();
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "No student with roll number " << rollNo << " found." << endl;
        }
        inFile.close();
    }
};

int main() {
    int choice, rollNo;
    Student student;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add student record\n";
        cout << "2. Display all student records\n";
        cout << "3. Search student by roll number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student.input();
                student.writeToFile();
                break;
            case 2:
                Student::readFromFile();
                break;
            case 3:
                cout << "Enter roll number to search: ";
                cin >> rollNo;
                Student::searchByRoll(rollNo);
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
