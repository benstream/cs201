/*
Benjamin Stream
Jon Genetti
CS201
dotcross.cpp
February 2, 2020
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <cfloat>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

// Variables
float storage = NULL; // Stores values before passing them on
float xa, ya, za, xb, yb, zb = NULL;
std::string error = "0";
float cx, cy, cz = NULL; // Reversed naming scheme to making easier to identify the product from the inputs.


int main()
{
    cout << "Please enter values for your dots." << endl;
    while (cx == NULL or cy == NULL or cz == NULL)
            {
        // Error Handling and storing values
            try 
                {
                    storage = std::stof(error);
                    if (xa == NULL) 
                    {
                        xa = storage;
                    }
                    else if (ya == NULL)
                    {
                        ya = storage;
                    }
                    else if (za == NULL)
                    {
                        za = storage;
                    }
                    else if (xb == NULL)
                    {
                        xb = storage;
                    }
                    else if (yb == NULL)
                    {
                        yb = storage;
                    }
                    else if (zb == NULL)
                    {
                        zb = storage;
                    }
                }
            catch (...)
            {
                cout << "Invalid value, try again" << endl;
            }
            if (xa == NULL)
            {
                cout << "Enter value for Ax: ";
                cin >> error;
            }
            else if (ya == NULL)
                {
                    cout << "Enter Value for Ay: ";
                        cin >> error;
                }
            else if (za == NULL)
            {
                cout << "Enter Value for Az: ";
                cin >> error;
            }
            else if (xb == NULL)
            {
                cout << "Enter Value for Bx: ";
                cin >> error;
            }
            else if (yb == NULL)
            {
                cout << "Enter Value for By: ";
                cin >> error;
            }
            else if (zb == NULL)
            {
                cout << "Enter Value for Bz: ";
                cin >> error;
            }
            // Formulas for the Calculations
            if (zb != NULL)
            {
                cx = (ya * zb - za * yb);
                cy = (za * xb - xa * zb);
                cz = (xa * yb - ya * xb);

                cout << std::setprecision(5) << "A Dot B = " << xa* xb + ya * yb + za * zb << endl;
                cout << std::setprecision(5) << "A cross B = " << "(" << cx << "," << cy << "," << cz << ")" << endl;
                break;
            }
           
                }

        
		
}