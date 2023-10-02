//
// Created by pedro on 10/1/2023.
//

#include "User.hpp"

User::User(std::string name): name(name) {

}

std::string User::getName() const {
    return this->name;
}
