#include <iostream>
#include <string>
int main() {
double cm;
double m;
std::string unit;

std::cout << "******************UNIT CONVERTER******************" << std::endl;
std::cout << "CM = Centimeter" << std::endl;
std::cout << "M = Meter" << std::endl;
std::cout << "What unit do you want to convert from? (CM/M): ";
std::cin >> unit;

if (unit == "CM" || unit == "cm") {
    std::cout << "Enter the value in centimeters: ";
    std::cin >> cm;

    cm = cm / 100;
    std::cout << "The value in meters is: " << cm << std::endl;
}else if (unit == "M" || unit == "m") {
    std::cout << "Enter the value in meters: ";
    std::cin >> m;

    m = m * 100;
    std::cout << "The value in centimeters is: " << m << std::endl;
}
else {
    std::cout << "Invalid unit. Please enter either 'CM' or 'M'." << std::endl;
}





std::cout << "****************************************************" << std::endl;




    return 0;
}