#include <iostream>
#include <typeinfo> // Include for typeid
using namespace std;

// Base class
class Base {
public:
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Base* b = new Derived(); // Base class pointer to derived class object

    // Using typeid to get type information
    cout << "Type of b: " << typeid(*b).name() << endl; // Dereference to get actual object type

    // Clean up
    delete b;
    return 0;
}
