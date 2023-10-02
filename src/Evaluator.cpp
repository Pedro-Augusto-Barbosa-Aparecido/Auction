//
// Created by pedro on 10/1/2023.
//

#include "Evaluator.hpp"

void Evaluator::evaluate(const Auction& auction) {
    std::vector<Bid> bids = auction.getBids();

    for (const Bid& bid : bids) {
        if (bid.getValueOfBid() > this->getBiggestValue()) {
            this->biggestValue = bid.getValueOfBid();
        }

        if (bid.getValueOfBid() < this->smallestValue) {
            this->smallestValue = bid.getValueOfBid();
        }
    }
}

float Evaluator::getSmallestValue() const {
    return this->smallestValue;
}

float Evaluator::getBiggestValue() const {
    return this->biggestValue;
}
