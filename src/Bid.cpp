//
// Created by pedro on 10/1/2023.
//

#include "Bid.hpp"

Bid::Bid(User user, float valueOfBid):
    user(user),
    valueOfBid(valueOfBid) {

}

float Bid::getValueOfBid() const {
    return this->valueOfBid;
}

User Bid::getUser() const {
    return this->user;
}