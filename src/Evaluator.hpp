//
// Created by pedro on 10/1/2023.
//

#ifndef AUCTION_EVALUATOR_HPP
#define AUCTION_EVALUATOR_HPP

#include "Auction.hpp"

class Evaluator {
private:
    float biggestValue = INT_MIN;
    float smallestValue = INT_MAX;
public:
    void evaluate(const Auction&);

    [[nodiscard]] float getBiggestValue() const;
    [[nodiscard]] float getSmallestValue() const;
};


#endif //AUCTION_EVALUATOR_HPP
