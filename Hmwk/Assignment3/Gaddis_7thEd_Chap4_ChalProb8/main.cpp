/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 18, 2015, 3:21 PM
 * Purpose:Create a change-counting game that gets the user to enter the number
 * of coins required to make exactly one dollar. Change entered in quarters,
 * dimes, nickels, and pennies. Based on calculation program should output 
 * if user won, or lost. 
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here
int main(int argc, char** argv)
{
    //Declare variables
    float quarter, dime, nickel, penny;
    float chngTtl;//Change total
    //Output prompt for input
    cout<<"This program will challenge you to enter an amount of quarters, ";
    cout<<"dimes, nickels, and pennies that make a dollar."<<endl;
    cout<<"Input the number of Quarters, dimes, nickels and pennies in";
    cout<<" that specific order to start calculation."<<endl;
    //Input of change
    cin>>quarter>>dime>>nickel>>penny;
    //Calculation
    chngTtl=(quarter*(25)+dime*(10)+nickel*(5)+penny*(1))/100;
    cout<<"= "<<chngTtl<<endl;
    if (chngTtl>1.0)
        cout<<" Im sorry the amount you entered is greater than $1.00"<<endl;
        cout<<endl;
    if (chngTtl<1.0)
        cout<<" Im sorry the amount you entered is less than $1.00"<<endl;
        cout<<endl;
    if (chngTtl==1.0){
        cout<<" Congratulations!!! you have won!! the amount entered total";
        cout<<" is $1.00!!!"<<endl;
        cout<<endl;}
        
    return 0;
}

