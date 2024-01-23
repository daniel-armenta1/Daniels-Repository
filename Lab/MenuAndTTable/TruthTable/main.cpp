/* 
 * File:   main.cpp
 * Author: Daniel Armenta
 * Created on January 11, 2023, 11:03 AM
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Heading
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y  ETC.... 13 COLUMNS"<<endl<<endl;
    
    //Row 1
    x=true;
    y=true;
    cout << (x?'T':'F')<<" ";
    cout << (y?'T':'F')<<"  ";
    cout << (!x?'T':'F')<<"  ";
    cout << (!y?'T':'F')<<"   ";
    cout << (x||y?'T':'F')<<" ";
    cout << (x^y? 'T':'F') << " ";
    cout << (x^y^y? 'T':'F') << " ";
    cout << (x^y^x? 'T':'F') << " ";
    cout << (! (x&&y)? 'T':'F') << " ";
    cout << (!x||!y? 'T':'F') << " ";
    cout << (! (x||y)? 'T':'F') << " ";
    cout << (!x&&!y? 'T':'F') << endl;
            
     //Row 1
    y=false;
    cout << (x?'T':'F')<<" ";
    cout << (y?'T':'F')<<"  ";
    cout << (!x?'T':'F')<<"  ";
    cout << (!y?'T':'F')<<"   ";
    cout << (x||y?'T':'F')<<" ";
    cout << (x^y? 'T':'F') << " ";
    cout << (x^y^y? 'T':'F') << " ";
    cout << (x^y^x? 'T':'F') << " ";
    cout << (! (x&&y)? 'T':'F') << " ";
    cout << (!x||!y? 'T':'F') << " ";
    cout << (! (x||y)? 'T':'F') << " ";
    cout << (!x&&!y? 'T':'F') << endl;
    
     //Row 1
    x=false;
    cout << (x?'T':'F')<<" ";
    cout << (y?'T':'F')<<"  ";
    cout << (!x?'T':'F')<<"  ";
    cout << (!y?'T':'F')<<"   ";
    cout << (x||y?'T':'F')<<" ";
    cout << (x^y? 'T':'F') << " ";
    cout << (x^y^y? 'T':'F') << " ";
    cout << (x^y^x? 'T':'F') << " ";
    cout << (! (x&&y)? 'T':'F') << " ";
    cout << (!x||!y? 'T':'F') << " ";
    cout << (! (x||y)? 'T':'F') << " ";
    cout << (!x&&!y? 'T':'F') << endl;
    
     //Row 1
    x=false;
    y=false;
    cout << (x?'T':'F')<<" ";
    cout << (y?'T':'F')<<"  ";
    cout << (!x?'T':'F')<<"  ";
    cout << (!y?'T':'F')<<"   ";
    cout << (x||y?'T':'F')<<" ";
    cout << (x^y? 'T':'F') << " ";
    cout << (x^y^y? 'T':'F') << " ";
    cout << (x^y^x? 'T':'F') << " ";
    cout << (! (x&&y)? 'T':'F') << " ";
    cout << (!x||!y? 'T':'F') << " ";
    cout << (! (x||y)? 'T':'F') << " ";
    cout << (!x&&!y? 'T':'F') << endl;
    
    //Exit the Program
    return 0;
}
