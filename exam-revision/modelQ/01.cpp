//In OOP, how may complexity be handled by abstraction ? Give an example to illustrate.

/*
Abstraction is the feature of oop to hide the unnecesary complexities behing the simple interface and only show the important features to the users.
Complexity may be simply handled by Abstraction by using private access modifiers or simply introduce an abstract class.
1. Interaction complexity 
2. Interface complexity 
These complexity may be handled with access modifiers. And other complexity may be handled with concept of abstract class too.
*/


#include <iostream>
using namespace std;

class Atm {
  public: 
    int pin;
    int amount;

    void extractMoney(int pin, int amount){
      if(validatePin(pin) && checkBalance(amount) ){
        balance = balance -amount;
        cout << "Money checked out! "<< amount <<endl;
      }
    } 

    void showBalance(){
      cout << "The balance is: "<< balance <<endl;
    }

  private : 
    int balance = 10000;

  bool validatePin(int pin) {
    if(pin == 2810){
      return true;
    }
    else {
      cout << "INVALID CREDENTIALS"<<endl;
      return false;
    }
    }

  bool checkBalance (int amount){
    if(amount % 1000 !=0){
      cout << "Only multiple of 500 can be transacted."<<endl;
      return false;
    }
    if(amount<=balance){
      return true;
    }
    else {
      cout << "INSUFFICIENT BALLANCE"<<endl;
      return false;
    }
    }
};

int main () {
  Atm a1;
  a1.showBalance();
  a1.extractMoney(2810, 5000);
  a1.showBalance();
  a1.extractMoney(2810, 5200);
  a1.showBalance();
  a1.extractMoney(2810, 5000);
  a1.extractMoney(2342, 0);
  return 0;
}