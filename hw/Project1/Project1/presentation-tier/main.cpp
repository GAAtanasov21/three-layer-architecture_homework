#include <iostream>
#include "../business-logic-tier/BusinessLogic.h"

int main() {
    std::string enteredUsername;
    std::cout << "Enter username: ";
    std::cin >> enteredUsername;

    BusinessLogic businessLogic;
    bool isUsernameCorrect = businessLogic.checkUsername(enteredUsername);

    if (isUsernameCorrect) {
        std::cout << "Username is correct!\n";
    }
    else {
        std::cout << "Username is incorrect!\n";
    }

    return 0;
}