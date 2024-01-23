#include <iostream>
#include <algorithm>  // Include the algorithm header for std::max
using namespace std;
    
int main() {
    //all variables
    char pkg;
    double hours;
    double totalAmount = 0;
//output ttiles
    cout << "ISP Bill\n";
    cout << "Input Package and Hours\n";
    cin >> pkg >> hours;

    if ((pkg == 'A' || pkg == 'B' || pkg == 'C') && hours >= 0 && hours <= 744) {
        switch (pkg) {//case regarding each pkg
            case 'A':
                totalAmount = 9.95 + max(0.0, hours - 10) * 2.00;//max is used to prevent the hours from going negative
                break;                                            // it chooses the biggest variable so for example if i used
            case 'B':                                            // 9 hours only, it would put it at neg 1, so mac would choose 0.0 creating no additonal fee
                totalAmount = 14.95 + max(0.0, hours - 20) * 1.00;
                break;
            case 'C':
                totalAmount = 19.95;
                break;
        }
        //display results
        cout << "Bill = $ " << totalAmount;
    } else {
        cout << "Invalid input. Choose betweeen package A, B or C and the hourly limit is 744 hours.." << endl;
    }

    return 0;
}
