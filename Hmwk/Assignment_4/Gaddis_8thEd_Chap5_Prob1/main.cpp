/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 06:40 PM
 * Purpose: Asking the user to enter a number larger than 0 and output a loop
 *          to get the sum of all the numbers. (ex: if user enters 50 then the
 *          loop will find the sum of 1, 2, 3, 4, ... 50.)
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int input,
        num,
        sum;
    
    //Initialize variables
    num = 1;
    sum = 0;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Sum of Numbers from 1 to the number you enter.\n\n";
    
    cout << "Enter a positive number: \n";
    
    cin >> input;
    
    //Output the transformed data
    if ( input > 0 )
    {
        for ( num = 1; num <= input; num++ )
        {
            sum += num;
        }
        cout << "\nThe sum of the numbers from 1 to " << input << " is: "
                << sum << ".\n" << endl;
    }
    
    //Exit stage right!
    return 0;
}

