#include <iostream>
//if statements (conditional statements)
int main(){

 int grade;   
std::cout << "Enter your grade: ";
std::cin >> grade;

if (grade >= 90) {
    std::cout << "You got an A!" << std::endl;
}

else if (grade >= 80) {
    std::cout << "You got a B!" << std::endl;
}

else if (grade >= 70) {
    std::cout << "You got a C!" << std::endl;
}


 if (grade >= 60) {
    std::cout << "You got a D!" << std::endl;
}

else {
    std::cout << "You failed!" << std::endl;
}







    return 0;
}