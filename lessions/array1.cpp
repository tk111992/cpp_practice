#include <iostream>
#include <string>

int main(){
    std::string bikes[4] = {
        "Harley",
        "Yamaha",
        "Indian",
        "Honda"
    };
    std::cout << "Here is the list of bikes\n";
    for(std::string i : bikes){
        std::cout << i << '\n';
    };
    std::cout << "\nbikes[3] = " << bikes[3] << '\n';
    bikes[3] = "Suzuki";
    std::cout << "\nHere is the modified list of bikes\n";
    for (std::string i : bikes){
        std::cout << i << '\n';
    };
    std::cout << "\nChanged Honda to other bike \n";
    std::cout << "bikes[3] = " << bikes[3] << '\n';
    std::cout << "\nList of Cars\n";
    std::string cars [] ={
        "Ford",
        "Pontiac",
        "GM",
        "Chevy"
    };
    for(std::string i : cars){
        std::cout << i << '\n';
    }
    std::cout << "Total bytes of cars = " << sizeof(cars) << '\n';
    std::cout << "Size of datatype: string = " << sizeof(std::string) << '\n';
    std::cout << "Numbers of elements in cars array = " << sizeof(cars)/sizeof(std::string) << '\n';
    int numbers[6]={10,20,30,40,50,60};
    std::cout << "\nList of numbers\n";
    for(int i : numbers){
        std::cout << i << '\n';
    }
    std::cout << "Total bytes of numbers = " << sizeof(numbers) << '\n';
    std::cout << "Size of datatype: int = " << sizeof(int) << '\n';
    std::cout << "Numbers of elements in numbers array = " << sizeof(numbers)/sizeof(int) << '\n';
    return 0;
}
