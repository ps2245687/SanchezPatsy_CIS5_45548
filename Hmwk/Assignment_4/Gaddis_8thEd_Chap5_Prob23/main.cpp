/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 10:44 PM
 * Purpose: Program to display Pattern A and Patter B using a loop.
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
    int row,
        star;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for ( int row = 0; row < 10; row++ )
    {
        for ( int star = 0; star < row; star++ )
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    for ( int row = 10; row > 0; row-- )
    {
        for ( int star = 0; star < row; star++ )
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    
    //Exit stage right!
    return 0;
}

