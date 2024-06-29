
//header file for cpp

#include <iostream>
using namespace std;

inline float calcSi(float p, float t, float r=12.5){
  return(p*t*r)/100;
}

int main () {
  float p, t;

  cout<<"Enter p and t: "<<endl;
  cin>>p>>t;
  cout<<"Simple Interest = "<<calcSi(p,t)<<endl;
}


