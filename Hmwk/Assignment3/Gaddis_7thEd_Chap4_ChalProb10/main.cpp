/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 17, 2015, 6:04 PM
 * Purpose: Software Sales. Write a program that asks for the number of units
 *  sold and computes the total cost of the purchase.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float unit,cost,total,total2,dis;
    //Output for Input
    cout<<"How many units do you wanna buy?"<<endl;
    cin>>unit;
    //Calculate
    if((unit>=10)&&(unit<=19))
        dis=.20;
    else if ((unit>=20)&&(unit<=49))
        dis=.30;
    else if ((unit>=50)&&(unit<=99))
        dis=.40;
    else if (unit>100)
           dis=.50;
     total=unit*99;
     cost=total*dis;
     total2=total-cost;
    //Results 
     cout<<" Your total cost is $"<<total<<endl;
     cout<<" Your discount was $"<<cost<<endl;
     cout<<" Your overall cost is $"<<total2<<endl;
    return 0;
}

