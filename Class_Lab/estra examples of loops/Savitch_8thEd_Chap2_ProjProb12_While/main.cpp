/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 15, 2015, 10:34 AM
 * Purpose: Babylonian Square root calculator. New version to utilize loops. 
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    float number, guess, r,count=r;
    //Input a number
    cout<<"Input a number to estimate it's square root "<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //Initialize the guess
    guess=number/2;
    while (abs(guess-r)>.01); {
        r=number/guess;
        guess=(guess+r)/2;
        count++;
        //Output the first pass
        cout<<"Loop"<<count<<" ->"<<guess<<endl;
    //}while(guess!=r);//My preferred technique*
    }
    //Exit stage right
    cout<<"Program is done. Goodbye."<<endl;
    return 0;
}

