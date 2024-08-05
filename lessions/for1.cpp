#include <iostream>
#include <string>

int main(){
    for(int i=0;i<10;i++){
        std::cout << i << '\n';
        if(i==5)
            break;
    }
    for(int i=0;i<10;i++){
        if(i==5)
            continue;
        std::cout << i << '\n';
    }
    return 0;
}
