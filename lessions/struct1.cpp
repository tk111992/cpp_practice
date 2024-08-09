#include <iostream>
#include <string>

struct bike{
    int model_no;
    std::string brand;
    std::string model;
};
int main(){

    bike Bike1;
    Bike1.model_no=1;
    Bike1.brand="Harley";
    Bike1.model="Softail";

    bike Bike2;
    Bike2.model_no=2;
    Bike2.brand="Harley";
    Bike2.model="Fat Boy";

    std::cout << Bike1.model_no << "|" << Bike1.brand << "|" << Bike1.model << "\n";
    std::cout << Bike2.model_no << "|" << Bike2.brand << "|" << Bike2.model << "\n";
    return 0;
}
