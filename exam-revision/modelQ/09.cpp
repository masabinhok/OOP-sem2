#include <iostream>
using namespace std;

//Exception handling is the most important feature to exist to write efficient code and prevent the program from terminating unexpectedly due to some error during the run time. Alike other programs, the need in C++ is similar. We set custom try catch block predicting the possible edge cases and catch all the possible errors also we may use ... catch-all exceptions to make sure we are missing none and our program is safe. So, its clear we need exception handling in cpp to handle the edge cases and not let the program terminate.

int main () {
  int input;
  try{
    cout << "Enter a Number: " << endl;
    cin >> input; 
    switch ( input){
      case 0 : 
        throw 1;
      case 1 : 
        throw 1.1;
      case 2 : 
        throw "String error";
      case 3 : 
        throw '%';
      default :
        throw invalid_argument(
        "wtf"
        );
    }
  }
  catch(...){
    cout << "Handled every exception." << endl;
  }
}

//I am throwing multiple errors, but the catch all block can handle each of them without biasing based on their types.