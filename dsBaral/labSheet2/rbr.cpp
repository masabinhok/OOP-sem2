#include <iostream>

using namespace std;

int & rbr(int & a ){
  return a;
}
//because of the '&' operator before rbr, it now returns by reference which means, the int & a takes a refrence of x instead of just its copy, and & rbr returns x as a whole.

int main (){
  int x =10; //assing x = 10
  cout <<x<<endl; //printing x gives 10
  rbr(x) = 25; //calling the function in LHS, because it returns x as a whole (return by reference) which can be assigned a value;
  cout<<x;
  return 0;
}