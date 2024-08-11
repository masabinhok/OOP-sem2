#include <iostream>
using namespace std;

//private data class vitra matra use garna painxa, object ma ni use garna paidainaa.., ani derived classes ma ni use garna paidaina, encapuslationnn..

//protected data vaneko chai area accessible within the class itself, ani derived classes vitra pani accessible hunxaaa.now 

//public data jata bata pani access garna milyo, i mean tesko obj instance le modify and use garna milxaa.

class Ground {
  private:
  int rooms;
  protected:
  void put(){
    cout<<"put";
  };
  public: 
  void get(){
    cout<<"get";
    rooms = 3;
  };
};

class Middle: private Ground{
  int labs;
  public: 
  void take(){

  };
  void give(){
    take();
    labs = 2;
    cout<<labs;
    put();
    give();
    get();
  }

};

class Top: public Middle{
  int roof;
  public:
  void in(){

  }
  void out()
  {}
};

int main(){
  Ground g;
  //inacessible attributes
  // g.rooms;  ::private
  // g.put(); ::protected
  g.get(); //::public (accessible)


}



