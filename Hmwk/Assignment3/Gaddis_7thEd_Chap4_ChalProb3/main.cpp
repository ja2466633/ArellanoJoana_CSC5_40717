/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 17, 2015, 9:10 PM
 * Purpose:Magic Dates. Program that asks the user to enter a month 
 * (in numeric form), a day, and a two-digit year.
 */

//System Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here.
int main(int argc, char** argv) {
    //Declaring Variables
    float mth,day,yr;//Month, Day, Year
    float time;//Variable for months time day.
    //Output prompt for input
    cout<<" This program will determine whether your date is magic or not.\n\n";
    cout<<" Please input a month in numbers.(2digits)"<<endl;
    cin>>mth;//Asking for months
    cout<<" Please input a day. (2digits)"<<endl;
    cin>>day;//Asking for days
    cout<<"Please input a year.(2digits)"<<endl;
    cin>>yr;//Asking for year
    //Calculations 
    cout<<"Your chosen date is " <<mth<<"/"<<day<<"/"<<yr<<endl<<endl;
    time=mth*day;
    if(time==yr) //Declaring if statements
        cout<<"Your day is magic!!!! \n";
    else
      cout<<"Your day is not magic... How sad... O'well!!\n";
    //Exit Program 
    return 0;
}

