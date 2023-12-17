#ifndef DATA_ACCESS_H
#define DATA_ACCESS_H

#include <vector>
#include <string>

class DataAccess {
public:
    std::vector<std::string> loadUsernames();
};

#endif // DATA_ACCESS_H