#include <iostream>
using namespace std;


float & replaceTemp(float &temp1, float &temp2){
  if(temp1 > temp2){
    return temp1;
  }
  return temp2;
}

int main(){
  float temp1, temp2, temp3;
  cout<<"Enter temp I: ";
  cin>>temp1;
  
  cout<<"Enter temp II: ";
  cin>>temp2;

  cout<<"Enter the temp you wanna replace the greater one with: ";
  cin>>temp3;

  replaceTemp(temp1, temp2) = temp3;
  cout<<"The greater temp has been replaced with temp3: "<<endl;
  cout<<"Printing temp1 and temp3"<<endl;
  cout<<temp1<<endl<<temp2<<endl;
  return 0;
}
