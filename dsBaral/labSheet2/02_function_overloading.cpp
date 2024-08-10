#include <iostream>
using namespace std;


float convert(float feet){
  return feet * 12;
}

void convert(float feet, float &inches)
{
  inches = feet * 12;
}

void convert(){
  float feet; 
  cout<<"3. Enter length in feet: ";
  cin>>feet;
  cout<<"3. Converted in inches: "<<feet*12<<endl;
}


int main (){
  float feet1, feet2, inches;
  cout<<"1. Enter the length in feet: "<<endl;
  cin>>feet1;


  //one argument
  cout<<"1. Converted in inches: "<<convert(feet1)<<endl;

  cout<<"2. Enter the length in feet: "<<endl;
  cin>>feet2;
  //two argument 
  convert(feet2, inches);
  cout<<"2. The result in inches is: "<<inches<<endl;

  //no argument
  convert();
  return 0;



}