
/* 
 * File:   main.cpp
 * Author: donis
 *
 * Created on January 16, 2023, 6:34 PM
 * Purpose: Template to be used for all future hmwk, Labs, Exams, Projects
 */

//System Libraries
#include <iostream> ///Input Output Library
using namespace std;

//User Libraries
 
 //Global constants not variables
 //Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) 
{   
    int num1 = .80; //minimum insurance coverage required
    int num2; //replacement cost of building
    double MiniAmt; //Minimum amount of insurance cost required
    
    //Declare Variables
    cout<<"How much is the replacement cost of your building?";
    cin>> num2;
    cout<< "The minimum insurance coverage needed is 80%... ";
    cin >> num1;
    cout<< "The amount of coverage you need to have your";
    cout<< " building covered is...";
    
    MiniAmt = static_cast<double> (num1 * num2);

    return 0;
}

