#include <iostream>
#include <string>
#include <cstdlib>

// Simple ATM-like console program that allows viewing balances, deposits, and withdrawals.
// Created for learning purposes and demonstration.

int main()
{

    // Initial balances
    int cash = 1000;      // Cash the user has
    int cardbalance = 500; // Money on the card
    int deposit;          // Variable to store deposit amount
    int withdraw;         // Variable to store withdrawal amount
    int menu;             // User menu selection
    std::string name;     // User's name input


     // Greeting and name input
     std::cout << "Welcome to Console Bank. Enter your name: ";
     std::cin >> name;

     std::cout << "Welcome, " << name << "\n\n";


      // Main program loop
      while (true) {
        // Display menu options
        std::cout << "[1] - View Your Cash" << std::endl;
        std::cout << "[2] - View Your Card Balance" << std::endl;
        std::cout << "[3] - Deposit Money To Your Card" << std::endl;
        std::cout << "[4] - Withdraw Money From Your Card" << std::endl;
        std::cout << "[5] - Exit" << std::endl;
        std::cout << "Make your choice: ";
        std::cin >> menu; // user's menu entry


         // Handle user menu choice
         switch (menu) {
         case 1:
             // Show current cash
             std::cout << "Your cash: $" << cash << "\n\n";
             break;


         case 2:
             // Show card balance
             std::cout << "Your card balance: $" << cardbalance << "\n\n";
             break;


         case 3:
             // Deposit money to card
             std::cout << "Enter the amount you will deposit to your card: $";
             std::cin >> deposit;

             if (deposit <= cash) {
                 cash -= deposit;
                 cardbalance += deposit;
                 std::cout << "Deposit successful!\n\n";
             }
             else{
                 std::cout << "You don't have enough cash.\n\n";
             }
             break;


         case 4:
             // Withdraw money from card
             std::cout << "Enter the amount you will withdraw from your card: $";
             std::cin >> withdraw;

             if (withdraw <= cardbalance) {
                 cardbalance -= withdraw;
                 cash += withdraw;
                 std::cout << "Withdrawal successful!\n\n";
             }
             else{
                 std::cout << "There is not enough amount on your card.\n\n";
             }
             break;


         case 5:
             // Exit program
             std::cout << "Goodbye!\n";
             exit(0);
             break;


         default:
             // Invalid input handler
             std::cout << "Invalid selection.\n\n";
             break;

         }
    }

    return 0;
}
