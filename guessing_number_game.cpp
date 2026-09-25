#include <iostream>

int main() {
    int number;
    const int correctNumber = 7;

    do {
        // --- START OF LOOP CODE ---
        // 1. Move the cin part into the loop body
        std::cout << "guess a number between 1 and 10: ";
        std::cin >> number;

        // 2. Put the if/else check *inside* the loop.
        // --- DELETE THE EXTRA } AT LINE 10 ---
        if (number == correctNumber) {
            std::cout << "You guessed the correct number!" << std::endl;
        } else {
            std::cout << "You guessed the wrong number, try again." << std::endl;
        }

        // --- DELETE THE EXTRA } AT LINE 17 ---

    // --- END OF LOOP CODE ---

    // 3. THIS IS WHERE YOUR WHILE CLAUSE MUST BE CONNECTED.
    // It should end with a semi-colon.
    } while (number != correctNumber);

    // --- DELETE THIS EXTRA, STRANDED WHILE PART ---
    // while (number != correctNumber ); // <--- This line is the bug. Remove it.

    return 0;
}




