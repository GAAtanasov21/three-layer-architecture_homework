#ifndef BUSINESS_LOGIC_H
#define BUSINESS_LOGIC_H

#include <string>
#include "../Project1/DataAccess.h"

class BusinessLogic {
public:
    bool checkUsername(const std::string& enteredUsername);
};

#endif // BUSINESS_LOGIC_H