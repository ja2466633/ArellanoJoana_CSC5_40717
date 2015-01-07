/* 
 * File:   main.cpp
 * Author: Joana Arellano       
 * Created on January 7, 2015, 7:29 AM
 * Purpose: To identify logic errors in code.
 */

//System Libraries
#include <iostream>
using namespace std;

// User Libraries
//Global Constants
//Function Prototypes

//ExExecution begins here!
int main()
{
    int numofpods, peasperpod, totalpeas;
    //Output Prompt for input
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    //Input number_of_pods
    cin >> numofpods;
    //Output Prompt for input
    cout << "Enter the number of peas in a pod:\n";
    //Input peas per pod
    cin >> peasperpod;
    //Calculating total peas
    totalpeas =numofpods+peasperpod;//Changed multiplication to addition sign.
    //Output results of calculation 
    cout << "If you have ";
    cout << numofpods;
    cout << " and ";
    cout << peasperpod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalpeas;
    cout << " peas in all the pods.\n";
    //Note by changing mult to add sign, prog still runs but answers are incorrect because of logic error. 
    //Exit stage right
    
    return 0;
}

