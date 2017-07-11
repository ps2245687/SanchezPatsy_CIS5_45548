/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 10:19 PM
 * Purpose: Program to display a square based on the number the user inputs 
 *          which will be the length and width of the square (must be positive
 *          and no larger than 15).
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
    int size,
        length,
        width;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Square Display! \n";
    
    cout << "Enter a positive number between 1-15: ";
    
    cin >> size;
    
    //Output the transformed data
    for ( length = 1; length <= size; length++ )
    {
        for ( width = 1; width <= size; width++ )
        {
            cout << "X";
        }
        cout << endl;
    }
    
    
    //Exit stage right!
    return 0;
}

