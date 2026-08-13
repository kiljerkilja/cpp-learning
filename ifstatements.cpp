#include <iostream>
//if statements (conditional statements)
int main(){

 int grade;   
std::cout << "Enter your grade: ";
std::cin >> grade;

if (grade >= 90) {
    std::cout << "You passed!" << std::endl;
}

else if (grade >= 80) {
    std::cout << "You barely passed!" << std::endl;
}

else if (grade >= 70) {
    std::cout << "You sadly failed. try again!" << std::endl;
}








    return 0;
}