/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 15, 2015, 5:50 PM
 * Purpose: Write a program that determines whether a meeting room is in
 * violation of fire law regulations regarding maximum room capacity.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
int main(int argc, char** argv)
{
    //Declare variables
    int maxRmC=52;//Maximum Room Capacity
    int inAmtP;//Inputed Amount of People attending meeting
    int pplOMx;//People over Maximum amount
    int avSpc;//Available space until Maximum amount reached 
    //Output Prompt for Input
    cout<<"This program will evaluate the number of people attending a meeting";
    cout<<" and compare it against fire law regulations"<<endl;
    cout<<"regarding maximum room capacity."<<endl;
    cout<<"Enter the amount of people in meeting: "<<endl;
    cin>>inAmtP;
    if (inAmtP>=maxRmC)
    { 
        cout<<"The number of people entered is more than maximum amount permitted."<<endl;
        pplOMx=inAmtP-maxRmC;
        cout<<"You need to remove "<<pplOMx<<" from the meeting."<<endl;
    }
    else 
    {   avSpc=maxRmC-inAmtP;}
    cout<<"Based on the number of people attending you have "<<endl;
    cout<<avSpc;
    cout<<" available spaces before reaching maximum amount."<<endl; 
    
    return 0;
}

