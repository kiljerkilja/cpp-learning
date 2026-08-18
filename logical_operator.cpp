#include <iostream>
int main() {
// && is a logical AND operator that evaluates to true if both operands are true, and false otherwise.

//int age;
//std::cout << "enter your age to check if you are eligible to vote: ";
//std::cin >> age;

//if (age >= 18 && age <= 99) {
//    std::cout << "You are eligible to vote" << std::endl;
//}

//else {
    //std::cout << "You are not eligible to vote" << std::endl;


    // || is a logical OR operator that evaluates to true if at least one of the operands is true, and false otherwise.


int weight;
std::cout << "enter your weight for checkup: ";
std::cin >> weight;

if (weight <= 0 || weight >= 70) {
    std::cout << "you are not within the normal weight range" << std::endl;
}
else {
    std::cout << "You are within the normal weight range" << std::endl;
}

// ! is a logical NOT operator that negates the truth value of its operand. If the operand is true, the result is false, and if the operand is false, the result is true.

bool raining = false;
if (!raining) {
    std::cout << "it's raining outside , be careful" << std::endl;
}
else {
    std::cout << "it's not raining outside , you can go out" << std::endl;
}






    return 0;
}