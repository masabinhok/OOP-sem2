//wap to illustrate the concept of rethrowing exception.


#include<iostream>
#include<math.h>
using namespace std;

int main () {
  int n; 
  cout << "Enter n: "<<endl;
  cin >> n;
  try{
    try{
    if(n<0){
      throw n;
    }

    else {
      cout << "Square of the number "<< n << "is: "<< pow(n, 2)<<endl;
    }
  }
  catch(int n1){
    cout<<"Sqaure root of a negative number cannot be found"<<n1<<endl;
    throw;
  }
  }
  catch(int n1){
    cout<<"Handling rethrown exception: Negative number passed as input."<<endl;
  }
  return 0;
  
}