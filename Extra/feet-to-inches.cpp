#include <iostream>

using namespace std;

//no argument
float feetToInches() 
{
  float feet, inches;
  cout << "Enter the number of feet: ";
  cin >> feet;
  inches = feet * 12;
  cout << "The number of inches is: " << inches;
  return 0;
}


//single argument

float feetToInches (float feet){
  return feet*12;
}


//double argument and concept of pass by reference

void feetToInches(float feet, float &inches){
  inches = feet*12;
}


int main () {
  float feet, inches;
  feetToInches();
  cout<<"Single argumnet feetToInches:"<<feetToInches()<<endl;
  cout<<"Double argument feetToInches:"<<inches<<endl;
  return 0;
  
}

