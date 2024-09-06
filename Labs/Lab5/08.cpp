// ambiguity

#include <iostream>
using namespace std;

class Apple {
  protected : 
  float apple;

  public: 
  void eat() {
    cout<<"I am eating apple"<<endl;
  }
};

class Banana {
  protected : 
  float banana;

  public: 
  void eat() {
    cout<<"I am eating Banana"<<endl;
  }
};

class Grapes : public Apple, public Banana {
  protected : 
  float apple;

  public: 
  void sabin () {
    // eat(); // ambiguos
    Apple::eat();
    Banana::eat();
  }
};

int main () {
  Grapes g;
  g.sabin();

  return 0;
}