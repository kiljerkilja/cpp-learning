#include <iostream>
#include <cmath> 
//basic math stuff, the area of a triangle.
int main(){

double base;
double height;
double area;

std::cout << "enter the base of the triangle: ";
std::cin >> base;
std::cout << "enter the height of the triangle: ";
std::cin >> height;
area = 0.5 * base * height;

std::cout << "The area of the triangle is: " << area << std::endl;


    return 0;
}
