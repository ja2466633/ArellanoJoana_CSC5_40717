/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 13, 2015, 11:35 AM
 * Purpose: Babylonian Square root calculator. 
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here.
//guess=number/2
//r=N/guess
//guess=(guess+r)/3
int main(int argc, char** argv) 
{    //Declare variables
    float number, guess, r;
    //Input a number
    cout<<"Input a number to estimate it's square root "<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"First pass calculate -> "<<guess<<endl;
    //Second pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the Second pass
    cout<<"Second pass calculate -> "<<guess<<endl;
    //Third pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the third pass
    cout<<"Third pass calculate -> "<<guess<<endl;
    //Forth pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the forth pass
    cout<<"Forth pass calculate -> "<<guess<<endl;
    //Exit stage right
    return 0;
}

