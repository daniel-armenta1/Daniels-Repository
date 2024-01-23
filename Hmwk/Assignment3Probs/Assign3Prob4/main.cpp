//System Libraries
#include <iostream>  
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    
    
    string run1, run2, run3;// runners
    int tm1, tm2, tm3;// times
   
   cin >> run1 >> tm1 >> run2 >> tm2 >> run3 >> tm3;
   
    double times[] = {tm1, tm2, tm3}; // time array
    
    cout << "Race Ranking Program\n";
    cout << "Input 3 Runners\n";
    cout << "Their names, then their times\n";
    
    sort(begin(times), end(times));//sorting
    
    cout << "John\t" << setw(3) << times[0] << endl;//grabs elements from arrays
    cout << "Jack\t" << setw(3) << times[1] << endl;
    cout << "Jim\t" << setw(3) << times[2];
    
    return 0;
}

