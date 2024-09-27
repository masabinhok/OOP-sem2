#include <iostream>
#include <string>
using namespace std;


class Nepali  {
  public: 
    void speak() {
      cout << "Ma nepali bolxu"<<endl;
    }
};

class English {
  public:
    void speak () {
      cout<< "I speak English."<<endl;
    }

};

class Nepangrezi: public English, public Nepali {
  public: 
  //maile yedi class child ma pani tei function banaye vani, function override vayera ambiguity solve hunxa...
    // void speak() {
    //   cout << "I both boling: this is function overriden"<<endl;
    // }
};

int main () {
  Nepangrezi ne;
  ne.Nepali::speak(); //yo chai maile scope resolution operator use garera ambiguity solve garekooo
  ne.English::speak();
  return 0;

}