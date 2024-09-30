// // //template le chai hamilai functions, classes, datatypes haru generic way ma banauna help garxa, enable coders to reuse code, type abstraction, vannale hamile esto function lekhna milxa jun sab data type sanga kaam garos ke...

// // //function templates, le chai allow you to write generic functions that can operate on different data types.

// #include <iostream>
// using namespace std;

// // template <typename T>
// // T print(T a, T b)
// //   {
// //     cout << a << " + " << b << " = " << a+b << endl;
// //   }

// // template <typename T>
// // T print(T a ){
// //   cout << a << endl;
// // }

// //   int main () {
// //     int intSum = print(4, 10);
// //     double doubleSum = print(4.4, 10.2);
// //     print(1);
// //     print(1.1);
// //     return 0;
// //   }


// //   //

// // template <typename T>

// // class Box {
// //   T value;
// //   public : 
// //     Box(T value ) : value(value) {}

// //     T getValue () {
// //       return value;
// //     }
// // };

// // template <typename T>
// // class Dabba : public Box {

// // };

// // int main () {
// //   Box<int> intBox(123);
// //   Box<double> doubleBox(120.06);
// //   cout << intBox.getValue() << " " << doubleBox.getValue();
  

  
// // }



// template <typename T>

// class Base {
//     protected : 
//     T value;

//     public : 
//     Base(T value) {
//       this->value = value;
//     }

//     void display () const {
//       cout << "Base value : " << value << endl;
//     }
// };

// template <typename T>
// class Derived: public Base<T> {
//   private :
//     T extraValue;

//   public: 
//     Derived(T val, T extraValue) : Base<T>(val) {
//       this->extraValue = extraValue;
//     }

//     void display () const {
//       Base<T>::display();
//       cout << "Derived class extravalue: " << extraValue << endl;
//     }
// };

// int main () {
//   Derived <int> d(1, 2);
//   Derived <double> c(1.4, 242.4);
//   d.display();
//   c.display();
// }


/*

containers : 
1. sequence containers: 
--- vector : dynamic array that can grow in size, it offers random access and is efficient for appending elements
---deque : a double-ended queue, dubai tira bata insert ra delete garna milxa.
---list : bidirectional traversal and efficient insertions/deletions from anywehre in the list.
2. Associative containers " 
--- set : a collection of unique elements.
--- map : a collection of key-value pairs, wher keys are unique and sorted.
3. Unordered Associative Containers: 
--- unordered set : no specific order.
--- unordered map : no specific orders, bu collectoin of uniqye key-value pairs.


iterators: 
  used to access and traverse elements in a container without exposing the underlying structure of the container.
*/


#include <iostream>
#include <vector>
#include <algorithm>  // For algorithms
using namespace std;

int main () {
  vector <int> numbers = {1, 6, 9 , 2, 3};

  sort(numbers.begin(), numbers.end());
  cout << "Sorted Numbers: " << endl;
  for(int num : numbers){
    cout << num << " " ;
  }
  cout << endl;
  return 0;
}