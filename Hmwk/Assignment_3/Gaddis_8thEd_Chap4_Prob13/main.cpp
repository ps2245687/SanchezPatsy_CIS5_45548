/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 5, 2017, 9:50 PM
 * Purpose: Calculating the number of points a customer earns from the amount 
 *          of books they input and purchase from Serendipity Booksellers. The
 *          points are awarded as follows: 0 books=0 points, 1 book=5 points,
 *          2 books=15 points, 3 books=30 points, 4 books or more=60 points. 
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
    int books,
    points;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Book Club Points.\n\n";
    cout << "Enter the number of books you purchased this month: ";
    cin >> books;
    
    //Output the transformed data
    if ( books == 0 )
    {
        points = 0;
        cout << "\nYou earned: " << points << " points.\n";
    }
    if ( books == 1 )
    {
        points = 5;
        cout << "\nYou earned: " << points << " points.\n";
    }
    if ( books == 2 )
    {
        points = 15;
        cout << "\nYou earned: " << points << " points.\n";
    }
    if ( books == 3 )
    {
        points = 30;
        cout << "\nYou earned: " << points << " points.\n";
    }
    if ( books >= 4 )
    {
        points = 60;
        cout << "\nYou earned: " << points << " points.\n";
    }
    else
    {
        if ( books < 0 )
            cout << "\nNumber of books cannot be less than 0.\n";
    }
    //Exit stage right!
    return 0;
}

