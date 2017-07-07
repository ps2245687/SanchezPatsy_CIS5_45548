/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 5, 2017, 8:43 PM
 * Purpose: Change counting game, user must enter number of coins to make a 
 *          dollar. Entering the number of pennies, nickels, dimes, and 
 *          quarters. If amount is correct display a message to congratulate 
 *          the user for winning the game if not then display how much more or
 *          how much less was needed for the dollar.
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
    float pennies,
    nickels,
    dimes,
    quarters,
    total;
    
    //Initialize variables
    
    //Input data
    cout << "Change for a Dollar Game.\n\n";
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;
    
    //Map inputs to outputs or process the data
    total = ( pennies * 0.01 ) + ( nickels * 0.05 ) + ( dimes * 0.10 ) +
            ( quarters * 0.25 );
    
    //Output the transformed data
    if ( total == 1.00 )
        cout << "\nCongratulations you win the $1 game.\n";
    else
    {
        if ( total < 1.00 && total > 0 )
        {
            cout << "\nYou entered less than $1.\n";
        }
        else
        {
            if ( total > 1.00 )
            {
                cout << "\nYou entered more than $1.\n";
            }
            else
            {
                cout << "\nThe number of coins entered has to be more than "
                        "0.\n";
            }
        }
    }
    
    //Exit stage right!
    return 0;
}

