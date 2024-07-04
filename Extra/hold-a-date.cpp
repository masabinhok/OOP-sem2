#include <iostream>
using namespace std;

struct Date {
  int y, m, d;

};


int formateDate(int y, int m, int d){
cout<<y<<"/"<<m<<"/"<<d<<endl;
}

int main () {
  Date d;
  cout<<"Enter year month and date: "<<endl;  
  cin>>d.y>>d.m>>d.d;
  formateDate(d.y, d.m, d.d);
  return 0;
}