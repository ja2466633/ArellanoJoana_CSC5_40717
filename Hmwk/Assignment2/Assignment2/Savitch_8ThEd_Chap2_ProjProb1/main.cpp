/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 13, 2015, 10:50 AM
 * Purpose: Conversion of metric ton to ounces.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
const float CMTNOZS=3.527392e4f;//Conversion from metric tons to ounces

//Function Prototypes

//Execution begins here. 
int main(int argc, char** argv) 
{
    //Declare variables
    float wtPkgOz; //Weight of cereal content in ounces
    float wtPkgTn; //Weight of cereal content in metric tons
    float nPkgTn;  // Number of cereal boxes in metric ton
    //Prompt user for cereal weights
    cout<<"Input the number of ounces in a cereal box "<<endl;
    cout<<"to convert to metric tons. "<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPkgOz;
    //Calculate the results
    wtPkgTn=wtPkgOz/CMTNOZS;
    nPkgTn=1/wtPkgTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPkgTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton = "<<nPkgTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the caluculation? "<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no. "<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y')
       {//Prompt user for cereal weights
        cout<<"Input the number of ounces in a cereal box "<<endl;
        cout<<"to convert to metric tons. "<<endl;
        cout<<"Format is float ddd.ddd (ounces)"<<endl;
        cin>>wtPkgOz;
        //Calculate the results
        wtPkgTn=wtPkgOz/CMTNOZS;
        nPkgTn=1/wtPkgTn;
        //Output the results
        cout<<"Weight of cereal box is "<<wtPkgTn<<"(metric tons)"<<endl;
        cout<<"Number of cereal boxes in a metric ton = "<<nPkgTn<<endl;}
    //Exit stage.
    return 0;
}

