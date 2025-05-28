#include <iostream>

int main() {

int number = 1;

switch(number){

case 1:
    std::cout << "A\n";
    break; 

case 2 :
    std::cout << "B\n";
    break; 
case 3 :
    std::cout << "C\n";
    break;
default :
    std::cout << "Default";
    break; 
}

return 0; 
}