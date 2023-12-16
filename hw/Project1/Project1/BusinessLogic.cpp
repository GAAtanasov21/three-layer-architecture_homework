#include "BusinessLogic.h"

bool BusinessLogic::checkUsername(const std::string& enteredUsername) {
    DataAccess dataAccess;
    std::vector<std::string> usernames = dataAccess.loadUsernames();

    for (const std::string& username : usernames) {
        if (username == enteredUsername) {
            return true; // Username found
        }
    }

    return false; // Username not found
}