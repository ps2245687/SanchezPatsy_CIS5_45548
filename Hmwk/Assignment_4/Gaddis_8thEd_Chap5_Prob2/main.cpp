/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 07:28 PM
 * Purpose: Displaying the characters for the ASCII codes 0-127 with only 16
 *          characters on each line.
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
    int characters,
            begin,
            row,
            ASCII;
    
    //Initialize variables
    begin = 0;
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for ( row = 0; row < 8; row++ )
    {
        characters = begin + 16;
        for ( ASCII = begin; ASCII < characters; ASCII++ )
        {
            cout << static_cast<char>(ASCII) << " ";
        }
        begin = characters;
        cout << endl;
    }
    //Exit stage right!
    return 0;
}

