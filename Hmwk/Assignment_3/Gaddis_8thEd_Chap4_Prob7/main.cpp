/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 5, 2017, 7:44 PM
 * Purpose: Calculating time from seconds to minutes, to hours, to days. If the
 *          user enters greater than or equal to 60 seconds convert to minutes.
 *          If the user enters greater than or equal to 3,600 seconds convert 
 *          to hours. If the user enters greater than or equal to 86,400 seconds
 *          convert to days.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float seconds,
    hour,
    day;
    
    //Initialize variables
    hour = 3600;
    day = 86400;
    
    //Input data
    cout << "Time Calculator \n\n";
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    
    //Map inputs to outputs or process the data
    cout << setprecision(2) << fixed;
    
    //Output the transformed data
    if ( seconds >= 86400 )
        cout << "\nThe seconds you entered is = " << seconds/86400 << 
                " day(s).\n";
    else
    {
        if ( seconds >= 3600 )
        {
            cout << "\nThe seconds you entered = " << seconds/3600 << 
                    " hour(s).\n";
        }
        else
        {
            if ( seconds >= 60 )
            {
                cout << "\nThe seconds you entered = " << seconds/60 << 
                        " minute(s).\n";
            }
            else
            {
                if ( seconds < 60 && seconds > 0 )
                {
                    cout << "\nThe seconds you entered = " << seconds << 
                            " second(s).\n";
                }
                else
                {
                    cout << "\nYou must enter a number larger than 0.\n";
                }
            }
    }
    }
    
    //Exit stage right!
    return 0;
}

