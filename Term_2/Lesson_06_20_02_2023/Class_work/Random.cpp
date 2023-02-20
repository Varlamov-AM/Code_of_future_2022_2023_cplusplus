#include <iostream>
#include <random>
#include <ctime>

int main(){

    std::mt19937 myRand(std::random_device{}());
    // to init generator in Windows OS use std::time(nullptr) as seed

    const int ITERATIONS = 10;
    const unsigned long long MAX_NUMBER = 1000000;

    unsigned long long sum = 0;
    for (int iter = 0; iter < ITERATIONS; ++iter) {
        sum += myRand() % MAX_NUMBER;
    }
    std::cout << "average number is " << 1.0 * sum / ITERATIONS;

    return 0;
}
