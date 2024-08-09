#include <iostream>
#include <string>

struct bike{
    int bike_no;
    std::string brand;
};

int main(){
    bike Bike1;
    Bike1.bike_no = 1;
    Bike1.brand = "Harley";
    std::cout << "No: " << Bike1.bike_no << " | Brand: " << Bike1.brand << "\n";
    return 0;
}
