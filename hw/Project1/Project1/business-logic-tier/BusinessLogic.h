#ifndef BUSINESS_LOGIC_H
#define BUSINESS_LOGIC_H

#include <string>
#include "../data-tier/DataAccess.h"

class BusinessLogic {
public:
    bool checkUsername(const std::string& enteredUsername);
};

#endif // BUSINESS_LOGIC_H