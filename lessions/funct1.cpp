#include <iostream>
#include <string>

void motor(std::string brand_choice,std::string model_choice){
    std::cout << "Your favorite brand: " << brand_choice << '\n';
    std::cout << "Your favorite model: " << model_choice << '\n';
}

int main(){
    std::string brand,model;
    std::cout << "Please choose brand: \n";
    std::cin >> brand;
    std::cout << "Please choose model: \n";
    std::cin >> model;
    motor(brand,model);
}
