/* 
 * File:   main.cpp
 * Author: Joana Arellano       
 * Created on January 7, 2015, 7:29 AM
 * Purpose: To make a code that reads two integers and 
 */

//System Libraries
#include <iostream>
using namespace std;

// User Libraries
//Global Constants
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv)
{
    int x, y, addtotal, multotal;
    //Output Prompt for input
    cout << "Press return after entering a number.\n";
    cout << "Enter a number:\n";
    //Input first number
    cin >> x;
    //Output Prompt for input
    cout << "Enter a second number:\n";
    //Input second number
    cin >> y;
    //Calculating sum of both numbers.
    addtotal=x+y;
    //Calculating product of both numbers.
    multotal=x*y;
    //Output results of addition calculation.
    cout << "The sum of ";
    cout << x;
    cout << " and ";
    cout << y;
    cout << " is: ";
    cout << addtotal <<endl;
    //Output result of multiplication calculation. 
    cout << "The product of ";
    cout << x;
    cout << " and ";
    cout << y;
    cout << " is: ";
    cout << multotal << endl;
    // Note: that code is designed for integers, any other number can not work.
    //Exit stage right
    
    return 0;
}

