//
// Created by pedro on 10/1/2023.
//

#ifndef AUCTION_AUCTION_HPP
#define AUCTION_AUCTION_HPP

#include <vector>
#include <string>

#include "Bid.hpp"

class Auction {
private:
    std::vector<Bid> bids;
    std::string description;
public:
    explicit Auction(std::string description);
    void addBid(const Bid& bid);

    [[nodiscard]] std::vector<Bid> getBids() const;
    [[nodiscard]] std::string getDescription() const;
};


#endif // AUCTION_AUCTION_HPP
