/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 5, 2017, 9:15 PM
 * Purpose: Calculating the cost of number of software unit packages a company 
 *          sells ($99). Discounts are given by quantity: 10-19=20%, 20-49=30%,
 *          50-99=40%, and 100 or more=50%. Number of units must be greater
 *          than 0.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int units;
    float subtotal,
    total;
    
    //Initialize variables
    
    //Input data
    cout << "Software Sales.\n\n";
    cout << "Enter software units sold: ";
    cin >> units;
    
    //Map inputs to outputs or process the data
    cout << setprecision(2) << fixed;
    
    //Output the transformed data
    if (units > 0 && units < 10 )
    {
        total = units * 99;
        cout << "\nThe total is: $" << total << "\n";
    }
    else
    {
        if ( units >= 10 && units <= 19)
        {
            subtotal = ( units *99 ) * 0.20;
            total = ( units * 99 ) - subtotal;
            cout << "\nThe total is: $" << total << "\n";
        }
        else
        {
            if ( units >= 20 && units <= 49 )
            {
                subtotal = ( units * 99 ) * 0.30;
                total = ( units * 99 ) - subtotal;
                cout << "\nThe total is: $" << total << "\n";
            }
            else
            {
                if ( units >= 50 && units <= 99 )
                {
                    subtotal = ( units * 99 ) * 0.40;
                    total = ( units * 99 ) - subtotal;
                    cout << "\nThe total is: $" << total << "\n";
                }
                else
                {
                    if ( units >= 100 )
                    {
                        subtotal = ( units * 99 ) * 0.50;
                        total = ( units * 99 ) - subtotal;
                        cout << "\nThe total is: $" << total << "\n";
                    }
                    else
                    {
                        cout << "\nThe number of units must be greater than "
                                "0.\n";
                    }
                }
            }
        }
    }
    //Exit stage right!
    return 0;
}

