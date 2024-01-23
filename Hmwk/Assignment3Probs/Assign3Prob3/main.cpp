
//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

int main() {
float begbal,chkfee, mthfee, lowbal, newbal; //initialize vars
int chks;

 cin >> begbal;//input
 cin >> chks;//input
 
cout <<  "Monthly Bank Fees\n";
cout << "Input Current Bank Balance and Number of Checks\n";

chkfee = (chks < 20) ? (0.10f * chks) : //tenary operator
         (chks >= 20 && chks <= 39) ? (0.08f * chks) :
         (chks >= 40 && chks <= 59) ? (0.06f * chks) :
         (chks >= 60) ? (0.04f * chks) : 0;
         
         mthfee = 10; // monthly fee
         
         if(begbal < 400){ //low bal alert
             lowbal = 15;
         } 
         else {lowbal = 0;}
         
         newbal = begbal - (lowbal + mthfee + chkfee);
         
         cout << fixed << setprecision(2);
         
         cout << "Balance     $" << setw(9) << begbal << endl;
         cout << "Check Fee   $" << setw(9) << chkfee << endl;
         cout << "Monthly Fee $" << setw(9) << mthfee << endl;
         cout << "Low Balance $" << setw(9) << lowbal << endl;
         cout << "New Balance $" << setw(9) << newbal;
    
    
    return 0;
}
