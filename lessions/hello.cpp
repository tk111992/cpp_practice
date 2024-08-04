#include <iostream>
#include <string>

int main (){
    std::string input1;
    std::cout << "Type in any input:\n";
    getline(std::cin,input1);
    std::cout << input1 << "\n";
    return 0;
}
