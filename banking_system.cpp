#include <iostream>
#include <iomanip>


double showbalance (double balance);
double deposit();
double withdraw(double balance);

int main() {
double balance = 143.04;
int choice= 0;


do { 
std::cout << "===============WELCOME TO THE BANKING SYSTEM ===============\n";
std::cout << "Please select an option:\n";
std::cout << "1. Show balance\n";
std::cout << "2. Deposit money\n";
std::cout << "3. Withdraw money\n";
std::cout << "4. Exit\n";
std::cin >> choice;
std::cout << "=============================================================\n";

std::cin.clear(); // Clear the input buffer
fflush(stdin); // Flush the input buffer

    switch (choice) {
        case 1:
        showbalance(balance);
        break;

        case 2:
        balance += deposit();
        break;
        case 3: balance -= withdraw(balance);
           break;

           case 4:
           std::cout << "Thank you for using the banking system. Goodbye!\n";
              break;
     default:
        std::cout << "Invalid choice. Please try again.\n";
        break;
    } 
}while (choice != 4);

 return 0;

}

double showbalance (double balance){ 
           std::cout << "Your current balance is: EGP"<< std::setprecision(2)<< std::fixed << balance << "\n";
           return balance;

}
double deposit(){  
    double amount = 0;

std::cout << "Enter the amount to deposit: ";
std::cin >> amount;

if(amount > 0){
return amount;
}

else {
    
    std::cout << "Invalid amount. Please try again.\n";
    return 0;
}
 
}

double withdraw(double balance){
        double amount = 0;

    std::cout <<  "Enter the amount to withdraw: ";
    std::cin >> amount;

if (amount > balance ) {
    std::cout << "insufficient funds to withdraw. Please try again.\n";
    return 0;
}
else if (amount < 0) {
    std::cout << "That's not a valid amount to withdraw. Please try again.\n";
    return 0;
}
else {
    return amount;
}

}