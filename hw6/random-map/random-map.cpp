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
    int min = 1;
    int max = 7;
    std::map<int, int> histU;
    for (int n = 0; n < 10000; n++)
    {
        ++histU[RandomBetweenU(min, max)];
    }
    std::cout << "Uniform distribution from " << min << " to " << max << std::endl;
    for (auto p : histU) 
    {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
            << p.first << ' ' << std::string(p.second / 200, '*') << std::endl;
    }
    std::map<int, int> histN;
    for (int n = 0; n < 10000; n++)
    {
        ++histN[RandomBetweenN(min, max)];
    }
    std::cout << "Normal distribution from " << min << " to " << max << std::endl;
    for (auto p : histN)
    {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
            << p.first << ' ' << std::string(p.second / 200, '*') << std::endl;
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

// Given a map, populate with uniform random Values.
void PrintDistribution(std::map<int, int>& numbers)
{
    for (int n = 0; n < 10000; n++)
    {
        numbers[RandomBetweenU(1, 10)]++;
    }
}