/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 20, 2015, 10:30 AM
 * Purpose: Write game of "23" tooth picks.
 */

//System Libraries
#include <iostream>
using namespace std;

//User LIbraries
//Global Constants
//Function Prototypes

//Execution begins.
int main(int argc, char** argv)
{
    //Declare Variables
    char thPick=23;
    bool computer;
    short nPckRmv;
    
    //Playing the game
    do{
        //Designate the player
        computer=false;
        //Ask player how many tooth picks to remove
        do{
        cout<<"There are "<<static_cast<int>(thPick)<<" left to remove"<<endl;
        cout<<"How many tooth picks do you want to remove? "<<endl;
        cout<<"Choose 1, 2, or 3"<<endl;
        cin>>nPckRmv;
        }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
        //Remove the number of tooth picks
        thPick-=nPckRmv;
        //Designate the computer
        computer=true;
        //Utilize login from the book
        if(thPick>4){
            nPckRmv=4-nPckRmv;
            thPick-=nPckRmv;
        }else if (thPick>=2&&thPick<=4){
            thPick=1;
        }else if (thPick==1){
            thPick=0;
            computer=false;
        }
    }while(thPick>1);
    
    //Output winner and loser
    if(computer){
        cout<<"Computer Wins you lose"<<endl;
    }else{
        cout<<"Computer loses we win"<<endl;
    }
    //Exit the Game
    return 0;
}

