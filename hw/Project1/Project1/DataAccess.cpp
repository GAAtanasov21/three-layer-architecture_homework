#include "DataAccess.h"
#include <fstream>

std::vector<std::string> DataAccess::loadUsernames() {
    std::vector<std::string> usernames;
    std::ifstream file("usernames.txt"); // Assuming usernames.txt is in the same directory

    if (file.is_open()) {
        std::string username;
        while (std::getline(file, username)) {
            usernames.push_back(username);
        }
        file.close();
    }

    return usernames;
}