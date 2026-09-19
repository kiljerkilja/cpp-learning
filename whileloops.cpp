#include <iostream>
int main () {
std::string passcode;
int pin= 0;

std::cout << "===============WELCOME TO THE BANK SAFE===============" << std::endl;
while (pin != 1234) {
    std::cout << "Please enter the bank pin: ";
    std::cin >> pin; 


if (pin == 1234) {
    std::cout << "Access granted!" << std::endl;
    
} else {
    std::cout << "Incorrect pin, please try again." << std::endl;
}


} 












std::cout << "======================================================" << std::endl;

}