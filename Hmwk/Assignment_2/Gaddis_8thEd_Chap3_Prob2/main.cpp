/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 28, 2017, 10:20 PM
 * Purpose: Program to calculate the amount of softball tickets sold per each 
 *          class of ticket as well as the total amount of income generated 
 *          from all ticket sales.
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
    double ticketA,
    ticketB,
    ticketC,
    amountA,
    amountB,
    amountC,
    totalSales;
    
    //Initialize variables
    ticketA = 15;
    ticketB = 12;
    ticketC = 9;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "How many Class A tickets were sold? ";
    cin >> amountA;
    cout << "How many Class B tickets were sold? ";
    cin >> amountB;
    cout << "How many Class C tickets were sold? ";
    cin >> amountC;
    
    cout << setprecision(2) << fixed;
    cout << "Class A Sales: $" << amountA * ticketA << endl;
    cout << "Class B Sales: $" << amountB * ticketB << endl;
    cout << "Class C Sales: $" << amountC * ticketC << endl;
    
    totalSales = ( amountA * ticketA ) + ( amountB * ticketB ) +
            ( amountC * ticketC );
    
    //Output the transformed data
    cout << "The total sales generated is: $" << totalSales
            << endl;
     
    //Exit stage right!
    return 0;
}

