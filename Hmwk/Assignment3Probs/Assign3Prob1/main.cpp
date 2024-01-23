/* 
 * File:   main.cpp
 * Author: Daniel Armenta
 * Created on January 17 2024
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  
#include <algorithm>
using namespace std;

int main() {
    //name variables with switch
    string names[3];
    //prompt for input
    cout << "Sorting Names\n";
    cout << "Input 3 names\n";
    //for loop to ask for input no more than 3 times
    for (int i = 0; i < 3; i++) {
        cin >> names[i];
    }
    //sorting process
    sort (begin(names), end(names));
    //for loop to print names
    for (int i = 0; i < 3; ++i) {
        cout << names[i];//outputs names from switch
        if (i + 1 < 3) {//checks to see if next iteration i greater than 3
            cout << endl;//if the loop checks out, , places new line
      }
    }  
    return 0;
}
