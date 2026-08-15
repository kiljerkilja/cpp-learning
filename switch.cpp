#include <iostream>
int main() {
    
std::cout << "choose an option" << std::endl;

int option;
std::cout << "1. tell me a funny joke" << std::endl;
std::cout << "2. why do we exist?" << std::endl;
std::cout << "3. what is the meaning of life?" << std::endl;
std::cin >> option;

switch (option) {
    case 1:
    std::cout << "I'm kinda stupid, ain't that funny?" << std::endl;
    break;
case 2:
std::cout << "to like share and subscribe" << std::endl;
break;
case 3:
std::cout << "life finds a way" << std::endl;
break;
}



    return 0;
}