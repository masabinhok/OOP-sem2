// #include <iostream>
// #include <string>
// #include <stdexcept>
// using namespace std;


// //handle runtime errors, allowing a program to continue execution rather than crashing.
// //try catch throw;

// // int main () {
// //   int denom;
// //   cin >> denom;
// //   try{
// //     try {
// //         if(denom == 0)
// //         {
// //           throw 0; //throwing an int error
// //         }
// //         if(denom == 1){
// //           throw 6.9;
// //         }
// //         if(denom == 69){
// //           throw "Magical number error";
// //         }
// //       }
// //       catch(...){
// //         cout << "Gotcha again.."<<endl;
// //         throw; //rethrow the exception..
// //       }
// //   }
// //   catch(...){
// //     cout << "Caught an unknown exception"<<endl;
// //   }
// //   return 0;
// // }

// // //jaba throw block bitra kei exception vettinxa ni, tesle euta appropriate catch block khojxa, which matches the type of excetption, vetyo vane, controll is passes to that catch block;
// // //vetiyena vane, program terminates.
// // //  use garxam, catch all exception ko lagi. ani esle chai sabbai exception handle gardinxa xuteko haru...


// class MyException {
//   int errorCode;
//   public: 
//     MyException(int errorCode)
//       {
//     this->errorCode = errorCode;
//       }

//     int getErrorCode(){
//       return errorCode;
//     }
// };


// // class Sabin {
// //   public : 
// //     Sabin () {
// //       throw "Constructor";
// //     }
// //     ~Sabin () {
// //       throw "Destructor";
// //     }
// // };

// void my_terminate(){
//   cout << "Uncaught exception, terminating"<< endl;
//   exit(1);
// }

// int main () {
//   set_terminate(my_terminate);
//   throw 1;
//   //if there is no one to catch the thrown error, the program terminates.
//   return 0;
  
// }

