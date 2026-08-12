#include <iostream>


int main(){

//arithmetic operators (+, -, *, /, %)

int teethcount = 32;

//teethcount+= 1;

teethcount*= 2;

std::cout << "The teeth count is: " << teethcount << "\n";



//type conversion (converting from one data type to another)


//double x = (int) 10.25;


//std::cout << "The value of x is: " << x << std::endl;


//std::cout << (char) 65 << std::endl;


//double celsius = 37.5;
//double fahrenheit = (celsius * 9/5) + 32;

//std::cout << "The temperature in Fahrenheit is: " << fahrenheit << "\n";


double height = 172.5;
    static_cast<int>(height);

std::cout << "The height is: " << static_cast<int>(height) << "\n";
//static_cast is used to convert the double value of height to an integer value, which will truncate the decimal part and return 172.
//confused me a bit 




//user input (learning how to take input from the user)

//cout << (insertion operator)
//cin >> (extraction operator)

std::string hobby;
int age;

std::cout << "What is your hobby? ";
std::cin >> hobby;

std::cout << "What is your age? ";
std::cin >> age;


std::cout << "Your hobby is: " << hobby << "\n";
std::cout << "Your age is: " << age << "\n";
std::cout << "In ten years, you will be: " << age + 10 << "\n";



//in here i will be trying to make my own calculator using the knowledge i have gained so far in this course. I will be using the arithmetic operators and user input to create a simple calculator that can perform basic arithmetic operations.

double num1, num2;

std::cout << "Enter the first number: ";
std::cin >> num1;
std::cout << "Enter the second number: ";
std::cin >> num2;

std::cout << "The sum of the two numbers is: " << num1 + num2 << "\n";
std::cout << "The difference of the two numbers is: " << num1 - num2 << "\n";
std::cout << "The product of the two numbers is: " << num1 * num2 << "\n";
std::cout << "The quotient of the two numbers is: " << num1 / num2 << "\n";

    return 0;










}   