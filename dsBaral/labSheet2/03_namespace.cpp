#include <iostream>
using std::cout;
using std::cin;
using std::endl;


namespace square {
  int num;
  int fun(int num){
    return num*num;
  }
}

namespace cube {
  int num;
  int fun(int num){
    return num*num*num;
  }
}

int main (){
square::num = 4;
cube::num = 5;
cout<<square::fun(cube::num)<<endl;
cout<<cube::fun(square::num)<<endl;
return 0;
}