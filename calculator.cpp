#include <iostream>
int main() {

    std::cout << "********** Welcome to the Calculator **********" << std::endl;
char op;
double num1, num2;
double result;

std::cout << "Enter operator (+, -, *, /): ";
std::cin >> op;

std::cout << "Enter two numbers: ";
std::cin >> num1 >> num2;

switch (op) {
    case '+':
        result = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << result << std::endl;
        break;
    case '-':
        result = num1 - num2;
        std::cout << num1 << " - " << num2 << " = " << result << std::endl;
        break;
    case '*':
        result = num1 * num2;
        std::cout << num1 << " * " << num2 << " = " << result << std::endl;
        break;
    case '/':
        if (num2 != 0) {    
        
            result = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << result << std::endl;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
        }
default:
        std::cout << "Error: Invalid operator!" << std::endl;
        break;
    }



     std::cout <<  "*********************************************" << std::endl;







return 0;
}   