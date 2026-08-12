#include <iostream>

//go back to the first namespace
namespace first{
    int x = 7;
}

int main(){

    //single character variables
    char grade = 'A';

    std::cout << "The grade is: " << grade << std::endl;

//booleans (true or false)

bool powerOn = true;

//strings (sequence of characters)
std::string name = "dat ass";


    std::cout << "The name is: " << name << std::endl;

    std::cout << "hello "<< name << std::endl;

//constants (unchanging variables)

const double WIDTH = 5.5;
double height = 10.5;
double area = WIDTH * height;


std::cout << "The area is: " << area << std::endl;

//namespaces (used to organize code and prevent name collisions)

int x = 5;

std::cout << first::x;

    return 0;
}