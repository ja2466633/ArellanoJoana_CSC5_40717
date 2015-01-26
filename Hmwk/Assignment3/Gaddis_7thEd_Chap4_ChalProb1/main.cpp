/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 16, 2015, 2:08 PM
 * Purpose: Minimum/Maximum
Write a program that asks the user to enter two numbers. 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Function Prototypes
//Global Constants

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable
    float n1,n2;
   //Output prompt for input
    cout<<" This program will determine which number is the smaller than\n";
    cout<<" or larger depend on your two entered numbers."<<endl<<endl;
    cout<<"Please input two numbers."<<endl;
    cin>>n1;//First number input
    cin>>n2;//Second number input
    //Calculation, if Statements
       cout<<"Your two numbers are "<<n1<<" and "<<n2<<endl;
    if (n1>n2) //larger then
        cout<<n1<<" is larger then "<<n2<<endl;
    if (n2>n1) //larger then
        cout<<n2<<" is larger then "<<n1<<endl;
    if (n1<n2) // smaller then 
        cout<<n1<<" is smaller then "<<n2<<endl;
    if (n2<n1) //smaller then
        cout<<n2<<" is smaller then "<<n1<<endl;
    //Exit program 
     return 0;
}

