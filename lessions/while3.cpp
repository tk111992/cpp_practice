#include <iostream>
#include <string>

int main(){
    int loop;
    int i = 0;
    std::cout << "enter # of loop: \n";
    std::cin >> loop;
    std::cout << '\n';
    std::cout << "while loop\n";
    while(i<loop){
        std::cout << "loop # " << i+1 << '\n';
        i++;
    }
    i=0;
    std::cout << "\ndo;while loop\n";
    do{
        std::cout << "loop # " << i+1 << '\n';
        i++;
    }while(i < loop);
    i=0;
    std::cout << "\nfor loop\n";
    for(i=0;i<loop;i++){
        std::cout << "loop # " << i+1 << '\n';
    }
    return 0;
}
