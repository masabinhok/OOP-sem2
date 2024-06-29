#include <iostream>
using namespace std;


int sum (int a, int b, int c){
  return (a+b+c);
}

int main () {
  int x, y, z;
  cout<<"Enter three numbers to add: "<<endl;
  cin>>x>>y>>z;
  cout<<"The sum of the three numbers is : "<<sum(x,y,z)<<endl;
  return 0;
}