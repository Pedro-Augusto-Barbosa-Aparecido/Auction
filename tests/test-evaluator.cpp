//
// Created by pedro on 10/1/2023.
//

#define CATCH_CONFIG_MAIN
#include "catch2.hpp"

#include "../src/Evaluator.hpp"

#include <iostream>

TEST_CASE("Must be get biggest bid of auction in ascendant order") {
    const float EXPECTED_VALUE = 2200;

    Bid firstBid(User("Pedro Augusto"), 2000);
    Bid secondBid(User("João Antônio"), 2100);
    Bid thirdBid(User("Odair"), EXPECTED_VALUE);

    Auction auction("Fiat 147 0Km");
    auction.addBid(firstBid);
    auction.addBid(secondBid);
    auction.addBid(thirdBid);

    Evaluator evaluator{};
    evaluator.evaluate(auction);

    REQUIRE(EXPECTED_VALUE == evaluator.getBiggestValue());
}

TEST_CASE("Must be get biggest bid of auction in descendant order") {
    const float EXPECTED_VALUE = 2200;

    Bid thirdBid(User("Odair"), EXPECTED_VALUE);
    Bid secondBid(User("João Antônio"), 2100);
    Bid firstBid(User("Pedro Augusto"), 2000);

    Auction auction("Fiat 147 0Km");
    auction.addBid(firstBid);
    auction.addBid(secondBid);
    auction.addBid(thirdBid);

    Evaluator evaluator{};
    evaluator.evaluate(auction);

    REQUIRE(EXPECTED_VALUE == evaluator.getBiggestValue());
}

TEST_CASE("Must be get smallest bid of auction in ascendant order") {
    const float EXPECTED_VALUE = 1000;

    Bid firstBid(User("Pedro Augusto"), 2000);
    Bid secondBid(User("João Antônio"), 2100);
    Bid thirdBid(User("Odair"), EXPECTED_VALUE);

    Auction auction("Fiat 147 0Km");
    auction.addBid(firstBid);
    auction.addBid(secondBid);
    auction.addBid(thirdBid);

    Evaluator evaluator{};
    evaluator.evaluate(auction);

    REQUIRE(EXPECTED_VALUE == evaluator.getSmallestValue());
}

TEST_CASE("Must be get smallest bid of auction in descendant order") {
    const float EXPECTED_VALUE = 1000;

    Bid thirdBid(User("Odair"), EXPECTED_VALUE);
    Bid secondBid(User("João Antônio"), 2100);
    Bid firstBid(User("Pedro Augusto"), 2000);

    Auction auction("Fiat 147 0Km");
    auction.addBid(firstBid);
    auction.addBid(secondBid);
    auction.addBid(thirdBid);

    Evaluator evaluator{};
    evaluator.evaluate(auction);

    REQUIRE(EXPECTED_VALUE == evaluator.getSmallestValue());
}
