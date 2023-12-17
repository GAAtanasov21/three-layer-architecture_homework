#include "DataAccess.h"
#include <fstream>
#include <iostream>

std::vector<std::string> DataAccess::loadUsernames() {
    std::vector<std::string> usernames;

    // Get the directory of this source file (DataAccess.cpp)
    std::string currentFileDirectory(__FILE__);
    currentFileDirectory = currentFileDirectory.substr(0, currentFileDirectory.find_last_of("\\/"));

    // Construct the full path to usernames.txt relative to this source file
    std::string filePath = currentFileDirectory + "/usernames.txt";

    std::ifstream file(filePath);

    if (file.is_open()) {
        std::string username;
        while (std::getline(file, username)) {
            usernames.push_back(username);
        }
        file.close();
    }
    else {
        std::cerr << "Error opening file: " << filePath << std::endl;
    }

    return usernames;
}