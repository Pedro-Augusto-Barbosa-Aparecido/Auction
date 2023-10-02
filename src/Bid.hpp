//
// Created by pedro on 10/1/2023.
//

#ifndef AUCTION_BID_HPP
#define AUCTION_BID_HPP

#include "User.hpp"

class Bid {
private:
    User user;
    float valueOfBid;
public:
    Bid(User user, float valueOfBid);
    [[nodiscard]] float getValueOfBid() const;
    [[nodiscard]] User getUser() const;
};


#endif //AUCTION_BID_HPP
