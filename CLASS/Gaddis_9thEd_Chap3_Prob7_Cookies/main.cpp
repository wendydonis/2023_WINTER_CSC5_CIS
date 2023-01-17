
/* 
 * File:   main.cpp
 * Author: donis
 *
 * Created on January 16, 2023, 5:28 PM
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
    //Write code here that prompts the user
    //to enter how many cookies they ate and
    //report the total calories consumed.
    
    //Variables
    int Amount;
    double servings, calories, AmountAte ;
    
    //The amount of cookies in the bag
    cout<<"The Bag of cookies has a total of"; 
    cout<<" 40 ";
    cin >> Amount;
    
    //Servings info
    cout << "The bag claims that there are";
    cout << "10 servings" ;
    cin >> servings;
    
    //The amount of calories each serving has
    cout<< "Each serving equals";
    cout<< " 300 calories " ;
    cin>> calories;
    
    //Ask user to input how many cookies he or she
    //actually ate.
    cout<< "How many cookies did user eat?";
    cin>> AmountAte;
    
    //The user then enters amount of cookies they ate
    //which gives them the total calories consumed.
    return 0;
}

