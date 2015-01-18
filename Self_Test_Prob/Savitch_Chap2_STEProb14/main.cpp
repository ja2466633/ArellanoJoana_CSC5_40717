/* 
 * File:   main.cpp
 * Author: JOEY
 *
 * Created on January 12, 2015, 9:18 PM
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    //Declare variables
    cout<<setprecision(4)<<fixed<<showpoint;
    float one(1.000), two(1.414), three(1.732),
    four(2.000), five(2.236);
    cout<< "\tN\tSquare Root\n";
    cout<< "\t1\t" << one <<endl
        << "\t2\t" << two <<endl
        << "\t3\t" << three <<endl
        << "\t4\t" << four <<endl
        << "\t5\t" << five <<endl;
    
    
    
     
    return 0;
}

