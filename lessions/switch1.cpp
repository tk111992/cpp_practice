#include <iostream>
#include <string>

int main(){
    while (true){
        int day;
        std::cout << "Choose 0-6 (Sun-Sat)\n";
        std::cin >> day;
        switch(day){
            case 0:
                std::cout << "Sunday\n";
                break;
            case 1:
                std::cout << "Monday\n";
                break;
            case 2:
                std::cout << "Tuesday\n";
                break;
            case 3:
                std::cout << "Wednesday\n";
                break;
            case 4:
                std::cout << "Thursday\n";
                break;
            case 5:
                std::cout << "Friday\n";
                break;
            case 6:
                std::cout << "Saturday\n";
                break;
            default:
                std::cout << "Please choose number 0-6\n";
                break;
        }
        std::string ans;
        std::cout << "Continue?:\n";
        std::cin >> ans;
        if (ans == "no" || ans == "n"){
            break;
        }   
    }
}
