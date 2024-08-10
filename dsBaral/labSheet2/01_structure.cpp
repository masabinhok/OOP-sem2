#include <iostream>
using namespace std;

struct date{
  int mm, dd, yy;
};


//while declaring and defining the function we take structure_name and instance_name as argument...
int format(date d1){
  cout<<d1.dd<<'/'<<d1.mm<<'/'<<d1.yy<<endl;
}

int main (){
  date d1;

  
  cout<<"Enter month: "<<endl;
  cin>>d1.mm;
  
  cout<<"Enter date: "<<endl;
  cin>>d1.dd;
  
  cout<<"Enter year: "<<endl;
  cin>>d1.yy;

  //while calling we pass the structure's instance as an argument
  format(d1);
  return 0;
}