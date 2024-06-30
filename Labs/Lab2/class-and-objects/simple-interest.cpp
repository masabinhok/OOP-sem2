#include <iostream>
using namespace std;

class SimpleInterest{
  private: 
  float principal, rate, time;
  public:
  void getData()
{
  cout<<"Enter the principal, rate and time: "<<endl;
  cin>>principal>>rate>>time;
}
  float calculateSI(){
    return principal*rate*time/100;
  }
};

int main () {
  //object jati ota ni milxa k euta class bata.... wauuu
  SimpleInterest si;
  si.getData();
  cout<<"The simple interest is: "<<si.calculateSI();


  cout<<endl;

  SimpleInterest si2;
  si2.getData();
  cout<<"The simple interest is: "<<si2.calculateSI();
  return 0;

}