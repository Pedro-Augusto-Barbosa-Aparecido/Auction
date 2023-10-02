//
// Created by pedro on 10/1/2023.
//

#ifndef AUCTION_USER_HPP
#define AUCTION_USER_HPP

#include <string>

class User {
private:
    std::string name;
public:
    explicit User(std::string name);
    [[nodiscard]] std::string getName() const;
};


#endif // AUCTION_USER_HPP
