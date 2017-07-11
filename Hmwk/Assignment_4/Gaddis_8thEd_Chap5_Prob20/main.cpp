/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 09:56 PM
 * Purpose: Random number guessing game where the program generates a random 
 *          number and the user must guess what number it is where the program 
 *          outputs if the guess is either too high or too low and must loop 
 *          until the correct random generated number is guessed.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int randomNum,
        seed,
        guess;
    
    //Initialize variables
    seed = time(0);
    srand(seed);
    randomNum = 1 + rand() % 10;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Random Number Guessing Game! \n\n";
    
    cout << "Can you guess what the random number is? (Between 1-10): \n";
    
    cin >> guess;
    
    //Output the transformed data
    while ( guess > randomNum )
    {
        cout << "Too high, try again.";
        cin >> guess;
    }
    while ( guess < randomNum )
    {
        cout << "Too low, try again. \n";
        cin >> guess;
    }
    
    cout << "Correct!\n";
    //Exit stage right!
    return 0;
}

