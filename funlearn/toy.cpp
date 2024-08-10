#include <iostream>


class ToyCar {
  public:

  std::string color;
  int wheels;

  void honk(std::string car_name) {
    std::cout<<car_name << " Honk! Honk!" << std::endl;
  }

  void drive(std::string car_name){
    std::cout<<car_name<<" Vroom vroom!"<<std::endl;
  }

};

int main(){
  ToyCar lambo;
  lambo.color = "Red";
  lambo.wheels = 4;
  lambo.drive("Lambo");
  lambo.honk("Lambo");

  std::cout << "Lambo color: " << lambo.color << std::endl;

  ToyCar ferrari;
  ferrari.color = "Yellow";
  ferrari.wheels = 6;
  ferrari.drive("Ferrari");
  ferrari.honk("Ferrari");
  
  std::cout << "Ferrari color: " << ferrari.color << std::endl;

  return 0;

}
