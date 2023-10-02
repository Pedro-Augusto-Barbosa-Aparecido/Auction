cmake_minimum_required(VERSION 3.26)
project(auction)

set(CMAKE_CXX_STANDARD 23)

add_executable(auction
        src/User.cpp
        src/User.hpp
        src/Auction.cpp
        src/Auction.hpp
        src/Bid.cpp
        src/Bid.hpp
        src/Evaluator.cpp
        src/Evaluator.hpp
        tests/test-evaluator.cpp
        tests/catch2.hpp)
