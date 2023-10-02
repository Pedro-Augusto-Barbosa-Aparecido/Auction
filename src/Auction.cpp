//
// Created by pedro on 10/1/2023.
//

#include "Auction.hpp"

Auction::Auction(std::string description): description(description) {}

std::vector<Bid> Auction::getBids() const {
    return this->bids;
}

void Auction::addBid(const Bid &bid) {
    this->bids.push_back(bid);
}

std::string Auction::getDescription() const {
    return this->description;
}
