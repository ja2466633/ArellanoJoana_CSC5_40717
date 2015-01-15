/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 13, 2015, 9:15 AM
 * Purpose: Code Truth table and swaps.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here. 
int main(int argc, char** argv)
{
    //Declare 2 boolean variables
    bool X,Y;
    //Output the heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<" X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y "<<endl;
    //File in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //File in the second row
    Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //File in the third row
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //File in the fourth row
    X=false,Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    
    //Swap.
    //Declare variables
    int a=2, b=3,temp;
    cout<<"\n";
    //Output original values of variables
    cout<<"First swap"<<endl;
    cout<<"Original value of a: "<<a<<endl;
    cout<<"Original value of b: "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n";
    //Output swap variables
    cout<<"Value of a after swap: "<<a<<endl;
    cout<<"Value of b after swap: "<<b<<endl;
    
    //Exit Stage.
    return 0;
}

