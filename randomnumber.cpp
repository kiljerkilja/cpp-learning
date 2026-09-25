#include <iostream>
#include <ctime> 

int main () {
srand(time(NULL)); // Seed the random number generator with the current time
int num1 = (rand() % 5) + 1; // Generate a random number between 1 and 5
std::cout << "Random number: " << num1 << std::endl;

    return 0;
}
