/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 16, 2015, 1:53 PM
 * Purpose: To write a program to score a paper-rock-scissor game. With 2 user 
 * inputs, the program will then state the winner and ask if game would want to
 * be played again.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here
int main() 
{
    //Declare variables
    char inpt1, inpt2, inptAgn; //Input1, Input2, InputAgain
    
    do 
    {    
    //Explanation of rules for players
    cout<<"This program will score a Rock-Paper-Scissors game between two";
    cout<<" contestants. \n";
    cout<<"Each user will input either R for rock, P for paper, or";
    cout<<" S for scissors when asked to.\n";
    cout<<"The program will calculate the winner and state it.\n";
    //Output prompt for input of first player
    cout<<" First player Enter either R for Rock,P for Paper, or S";
    cout<<" for Scissor. \n";
    //Input user 1 choice.
    cin>>inpt1;
    cout<<endl;
    //Output prompt for input user 2
    cout<<" Second player Enter either R for Rock,P for Paper, or S";
    cout<<" for Scissor. \n";
    //Input user 2 choice.
    cin>>inpt2;
    cout<<endl;
    //Game equation
        if ((inpt1=='R'||inpt1=='r')&&(inpt2=='S'||inpt2=='s'))
            cout<<" First player wins!. Rock breaks Scissors. \n";
            cout<<endl;
        if ((inpt1=='S'||inpt1=='s')&&(inpt2=='P'||inpt2=='p'))
            cout<<" First player wins!. Scissors cuts Paper. \n";
            cout<<endl;
        if ((inpt1=='P'||inpt1=='p')&&(inpt2=='R'||inpt2=='r'))
            cout<<" First player wins!. Paper covers Rock. \n";
            cout<<endl;
        if ((inpt1=='R'||inpt1=='r')&&(inpt2=='P'||inpt2=='p'))
            cout<<" Second player wins!. Paper covers rock. \n";
            cout<<endl;
        if ((inpt1=='S'||inpt1=='s')&&(inpt2=='R'||inpt2=='r'))
            cout<<" Second player wins!. Rock breaks Scissor. \n"; 
            cout<<endl;
        if ((inpt1=='P'||inpt1=='p')&&(inpt2=='S'||inpt2=='s'))
            cout<<" Second player wins!. Scissors cut Paper. \n";
            cout<<endl;
        if ((inpt1=='R'||inpt1=='r')&&(inpt2=='R'||inpt2=='r'))
            cout<<"No one wins. \n";
            cout<<endl;
        if ((inpt1=='S'||inpt1=='s')&&(inpt2=='S'||inpt2=='s'))
            cout<<"No one wins. \n";
            cout<<endl;
        if ((inpt1=='P'||inpt1=='p')&&(inpt2=='P'||inpt2=='p'))
            cout<<"No one wins. \n";
            cout<<endl; 
        //Play again?
        cout<<" Do you wish to continue playing? if Yes, input Y"; 
        cout<<" if no, input N. \n";
        cin>>inptAgn;
        cout<<endl;
        if (inptAgn=='N'||inptAgn=='n')
        {
            cout<<"Good Bye!.\n";
        }
    } while(inptAgn !='N'||inptAgn !='n');
    
    return 0;
}

