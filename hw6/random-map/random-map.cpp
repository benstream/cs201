/*
Benjamin Stream
Jon Genetti
CS201
random-map.cpp
April 10, 2020
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

// Functions for Assignment
int RandomBetweenU(int first, int last);
int RandomBetweenN(int first, int last);
int RandomBetween(int first, int last);
void PrintDistribution(std::map<int, int>& numbers);



int main()
{
    // Seed with a real random value, if available
    std::random_device r;

    // Choose a random mean between 1 and 6
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, 6);
    int mean = uniform_dist(e1);
    std::cout << "Randomly-chosen mean: " << mean << '\n';

    // Generate a normal distribution around that mean
    std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
    std::mt19937 e2(seed2);
    std::normal_distribution<> normal_dist(mean, 2);

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[std::round(normal_dist(e2))];
    }
    std::cout << "Normal distribution around " << mean << ":\n";
    for (auto p : hist) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
            << p.first << ' ' << std::string(p.second / 200, '*') << '\n';
    }
}

// Uniform random number between first & last provided
int RandomBetweenU(int first, int last)
{
    std::random_device rd;
    std::default_random_engine gen(rd()); // This chooses a random seed
    std::uniform_int_distribution<> dis(first, last);
        return dis(gen);
}

//Get a normal random number between first and last with the mean and standard deviation of range /4
int RandomBetweenN(int first, int last)
{
    float range = (last - first) / 2;
    std::random_device rd;
    std::default_random_engine gen(rd()); // This chooses a random seed
    std::normal_distribution<> dis((double)first + range, range / 2);
        int value;
    while (true)
    {
        value = std::round(dis(gen));
        if (value <= last && value >= first)
        {
            return value;
        }
    }
}

// Get a random number between first and last using the rand function
int RandoBetween(int first, int last)
{
    return rand() % last - first + first;
}
