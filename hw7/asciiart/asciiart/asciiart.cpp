/*
Benjamin Stream
Jon Genetti
CS201
program.cpp
Month Day, 2020
*/

#include <iostream>
#include "Color3.hpp"
#include "Image3.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;
using std::ofstream;


int main()
{

    Image3 image(0, 0);
    if (image.loadPPM("parrot.ppm")) {
        image.printASCII(cout);
    }
}