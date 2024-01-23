/* 
 * File:   main.cpp
 * Author: Daniel Armenta
 * Created on January 17 2024
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

int main() {
    
    int bookpur;
    
    cout << "Book Worm Points\n";
cout << "Input the number of books purchased this month.\n";
cin >> bookpur;

 cout << "Books purchased =  " << bookpur << endl;

switch (bookpur){ //using a switch 
    case 0: 
    cout  << "Points earned   = 0";
    break;
    
    case 1:
    cout  << "Points earned   = 5";
    break;
    
    case 2:
    cout  << "Points earned   = 15";
    break;
    
    case 3:
    cout  << "Points earned   = 30";
    break;
    default:
            if (bookpur >= 4) {
                cout << "Points earned   = 60";
            } else {
                cout << "Invalid input. Please enter a valid number and go buy some books dork!.";
            }
    }
    


    return 0;
}
