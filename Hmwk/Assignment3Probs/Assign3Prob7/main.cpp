/* problem 7
 * File:   main.cpp
 * Author: Daniel Armenta
 * Created on January 17 2024
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

int main(int argc, char** argv) {
  
  int year;
    cout << "Arabic to Roman numeral conversion\n";
    cout << "Input the integer to convert.\n";
    cin >> year;

    int n1000 = year / 1000;
    int n100 = (year / 100) % 10;
    int n10 = (year / 10) % 10;
    int n1 = year % 10;
    
   
  
  
  
    return 0;
}
