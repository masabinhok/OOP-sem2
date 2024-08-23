#include <iostream>
#include <fstream>

class Marga {
  
  std:: string userName, email, password;
  std:: ofstream file;

  public: 
    void login();
    void signup();
    void forgot();
};




int main () 
{
  int choice;
while (choice !=4){
  std:: cout<<"\n\nMARGA - FIND_YOUR_ROUTE - Login Page!"<<std::endl;
  std::cout<<"Enter respective number to perform operations you want!"<<std::endl;
  std:: cout<<"1. Already have an account? Login"<<std::endl;
  std:: cout<<"2. New to Marga? SignUp"<<std::endl;
  std::cout<<"3. Forgot Password?"<<std::endl;
  std::cout<<"4. Close App"<<std::endl;
  std::cout<<"So what do you choose?"<<std::endl;
  std::cin>>choice;
  std::cin.ignore();
  Marga m;


  switch(choice){
    case 1 : 
    m.login();
    break;

    case 2 :
    m.signup(); 
    break;

    case 3 : 
    m.forgot();
    break;

    case 4 : 
    return 0;
    break;

    default : 
    std::cout<< "Please follow the instructions properly!"<<std::endl;
    break;
  }
  }


  return 0;

}


void Marga :: signup() {
  std:: cout<<"\n Decide a unique username for yourself :: "<<std::endl;
  std::cin>>userName;
  std::cout<<"\n Enter your email :: "<<std::endl;
  std:: cin>>email;
  std::cout<<"\n Set a strong password :: "<<std::endl;
  std::cin>>password;
  
  file.open("userData.txt", std::ios::out | std::ios::app);

  if(file.is_open())
{
  file << userName << ' ' << email << ' ' << password << '\n';
  std :: cout <<"\nUser registered successfully! One step ahead to find your route never this easy!"<<std:: endl;
  file.close();
}
else{
  std::cerr <<" Error opening file for writing !"<< std::endl;
}

}


void Marga :: login () {
  std:: string searchName, searchPass;
  std:: cout << "---------LOGIN--------"<<std::endl;
  std:: cout << "Enter you username :: "<<std:: endl;
  std::cin>> searchName;
  std:: cout << "Enter you password :: "<<std:: endl;
  std::cin>> searchPass;

  std::ifstream file("userData.txt");

    if(file.is_open())
      {
        bool found = false;
        while(file >> userName >> email >> password){
          if(userName == searchName && password == searchPass){
            std::cout<<"\n Acccount Login Successful...!";
            std::cout<<"\n Username :: "<< userName<<std::endl;
            std::cout<<"\n Email :: "<< email<<std::endl;
            found = true;
            break ;
          }
        }
        if(!found){
          std::cout <<"Invalid username or password!"<<std::endl;
        }

        file.close();
    }
    else{
      std::cerr <<" Error opening file for writing !"<< std::endl;
    }
}



void Marga :: forgot (){
  std::string forgotName, forgotEmail;
  std:: cout<<"Oh, why did you forget your pass poor boy!"<<std::endl;
  std::cout<< "Enter your username :: "<<std::endl;
  std::getline(std::cin, forgotName);
  std:: cout<< "Enter your email :: " <<std::endl;
  std::getline(std::cin, forgotEmail);

  std::ifstream file("userData.txt");

    if(file.is_open()){
      bool found = false;
  while(file >> userName >> email >> password){
          if(userName == forgotName && email == forgotEmail){
            std::cout << "Bingo, glad you didnot forgot your username and email. haha"<<std::endl;
            std::cout << "Your pass is :: "<< password;
            found = true;
            break ;
          }
        
        }
        if(!found ){
          std::cout <<" Noob , you forgot your username and email too >> i cant help now!"<<std::endl;
        }
        file.close();
    }
    else {
      std::cerr<<"Failed to open the file!"<<std::endl;
    }
}