#include <iostream>
#include <string> 

using namespace std;

void display(int x) {
    if (x == 0) {
        throw 1;           
    }
    if (x == 1) {
        throw 1.1f;          
    }
    if (x == 2) {
        throw string("sabin"); 
    }
}

int main() {
  int n;
    try {
      cout<<"Enter 0 , 1 or 2: "<<endl;
      cin >>n;
      display(n);
    }
    catch (int n1) {
        cout << "Handling Integer " << n1 << endl;

    }
    catch (float n1) {
        cout << "Handling Float " << n1 << endl;

    }
    catch (string &n1) {
        cout << "Handling String " << n1 << endl;
    }
    return 0;
}
