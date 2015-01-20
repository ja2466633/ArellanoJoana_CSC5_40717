/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 20, 2015, 8:23 AM
 * Purpose: To write a program that computes the cost of a long distance call.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
const float HRIDAY=24; //Hours in day 
//Function Prototype

//Execution begins.
int main(int argc, char** argv)
{
    //Declare variable
    char dyCall1,dyCall2;//Day of call letter one and two.
    char repAgn;
    float callSt, ttlCost;
    int durCall;
    do
    {
        //Output Prompt for input
        cout<<"This program will calculate the cost of a long distance call.  ";
        cout<<"Based on which day of the week you call,the hours you call,and ";
        cout<<"the length of the call. Lets get started. \n";
        cout<<"Enter day of call. Mo for Monday, Tu for Tuesday, We for ";
        cout<<"Wednesday, Th for Thursday, Fr for Friday, Sa for \n";
        cout<<"Saturday, Su for Sunday. \n";
        //Input Day of call
        cin>>dyCall1>>dyCall2; //To be able to enter MO or MO
        //Output Prompt for input
        cout<<"Enter the time call started in 24-hour notation. Ex: 13.30 \n";
        //Input Time call started
        cin>>callSt;
        //Output prompt for input
        cout<<"Enter the length of call, in minutes Ex. 23 \n";
        //Input length of call
        cin>>durCall;
        //Options of if stated below:
        if ((dyCall1=='M'||dyCall1=='m')&&(dyCall2=='O'||dyCall2=='o'))
        {
            if ((callSt>=8.00)&&(callSt<=18.00))
            {
                ttlCost=durCall*(0.40);
            cout<<ttlCost;
            }
            cout<<endl;
        }       
        
        //Option for user to repeat.
        cout<<"Do you wish to run again? If Yes, input Y"; 
        cout<<" if no, input N. \n";
        cin>>repAgn;
        cout<<endl;
        if (repAgn=='N'||repAgn=='n')
        {
            cout<<"Good Bye!.\n";
        }
    } while(repAgn !='N'||repAgn !='n');
    
    return 0;
}