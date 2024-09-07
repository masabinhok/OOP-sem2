// wap to illustrate the concept of catching all exception

#include <iostream>
using namespace std;

void check(int x){
  try{
    if(x==0){
      throw(1);
    }
    if(x==1){
      throw('#');
    }

    if(x==2){
      throw(1.9);
    }
  }
  catch(...){
    cout<<"All types of exception caught"<<endl;
  }
}

int main () {
  check(1);
  check(0);
  check(2);
  return 0;

}