//Daniel Armenta
//Jan 17 2024

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

//using to keep questions more organized and modular
void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
void question7();
void question8();

int main() {
    char option;
    const char nOptions = '8';
//prompt user to answer which n to be accessed
    do {
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Question 1" << endl;
        cout << "2 -> Question 2" << endl;
        cout << "3 -> Question 3" << endl;
        cout << "4 -> Question 4" << endl;
        cout << "5 -> Question 5" << endl;
        cout << "6 -> Question 6" << endl;
        cout << "7 -> Question 7" << endl;
        cout << "8 -> Question 8" << endl;
        cout << "etc....." << endl;
        cin >> option;
//using a switch to pull answers
        switch (option) {
            case '1':
                question1();
                break;
            case '2':
                question2();
                break;
            case '3':
                question3();
                break;
            case '4':
                question4();
                break;
            case '5':
                question5();
                break;
            case '6':
                question6();
                break;
            case '7':
                question7();
                break;
            case '8':
                question8();
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}

// Question 1
void question1() {
    string names[3];
    cout << "Sorting Names\n";
    cout << "Input 3 names\n";
    for (int i = 0; i < 3; i++) {
        cin >> names[i];
    }
    sort(begin(names), end(names));
    for (int i = 0; i < 3; ++i) {
        cout << names[i];
        if (i + 1 < 3) {
            cout << endl;
        }
    }
}

// Question 2
void question2() {
    int bookpur;
    
    cout << "Book Worm Points\n";
    cout << "Input the number of books purchased this month.\n";
    cin >> bookpur;

    cout << "Books purchased =  " << bookpur << endl;

    int points = 0;
    switch (bookpur) {
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
                points = 60;
            } else {
                cout << "Invalid input. Please enter a valid number of books." << endl;
                return;
            }
    }
    cout << "Points earned = " << points;
}

// Question 3
void question3() {
    float begbal, chkfee, mthfee, lowbal, newbal;
    int chks;

    cout << "Monthly Bank Fees\n";
    cout << "Input Current Bank Balance and Number of Checks\n";
    cin >> begbal >> chks;

    chkfee = (chks < 20) ? (0.10f * chks) :
             (chks >= 20 && chks <= 39) ? (0.08f * chks) :
             (chks >= 40 && chks <= 59) ? (0.06f * chks) :
             (chks >= 60) ? (0.04f * chks) : 0;

    mthfee = 10;

    lowbal = (begbal < 400) ? 15 : 0;

    newbal = begbal - (lowbal + mthfee + chkfee);

    cout << fixed << setprecision(2);
    cout << "Balance     $" << setw(9) << begbal << endl;
    cout << "Check Fee   $" << setw(9) << chkfee << endl;
    cout << "Monthly Fee $" << setw(9) << mthfee << endl;
    cout << "Low Balance $" << setw(9) << lowbal << endl;
    cout << "New Balance $" << setw(9) << newbal;
}

// Question 4
void question4() {
    string run1, run2, run3;
    int tm1, tm2, tm3;

    cout << "Race Ranking Program\n";
    cout << "Input 3 Runners\n";
    cout << "Their names, then their times\n";

    cin >> run1 >> tm1 >> run2 >> tm2 >> run3 >> tm3;

    double times[] = { static_cast<double>(tm1), static_cast<double>(tm2), static_cast<double>(tm3) }; // time array
    
    cout << "Race Ranking Program\n";
    cout << "Input 3 Runners\n";
    cout << "Their names, then their times\n";
    
    sort(begin(times), end(times));//sorting
    
    cout << "John\t" << setw(3) << times[0] << endl;//grabs elements from arrays
    cout << "Jack\t" << setw(3) << times[1] << endl;
    cout << "Jim\t" << setw(3) << times[2];
}

// Question 5
void question5() {
    char pkg;
    double hours;
    double totalAmount = 0;
    
    cout << "ISP Bill\n";
    cout << "Input Package and Hours\n";
    cin >> pkg >> hours;

    if ((pkg == 'A' || pkg == 'B' || pkg == 'C') && hours >= 0 && hours <= 744) {
        switch (pkg) {
            case 'A':
                totalAmount = 9.95 + max(0.0, hours - 10) * 2.00;
                break;
            case 'B':
                totalAmount = 14.95 + max(0.0, hours - 20) * 1.00;
                break;
            case 'C':
                totalAmount = 19.95;
                break;
        }
        cout << "Bill = $ " << totalAmount;
    } else {
        cout << "Invalid input. Choose between package A, B, or C, and the hourly limit is 744 hours.." << endl;
    }
}

// Question 6
void question6() {
    char player1, player2;
    
    cout << "Rock Paper Scissors Game\n";
    cout << "Input Player 1 and Player 2 Choices\n";
    cin >> player1;
    player1 = toupper(player1);
    cin >> player2;
    player2 = toupper(player2);

    if (player1 == 'P' && player2 == 'R') {
        cout << "Paper covers rock.";
    } else if (player1 == 'R' && player2 == 'S') {
        cout << "Rock breaks scissors.";
    } else if (player1 == 'S' && player2 == 'P') {
        cout << "Scissors cuts paper.";
    } else if (player1 == 'P' && player2 == 'S') {
        cout << "Scissors cuts paper.";
    } else if (player1 == 'R' && player2 == 'P') {
        cout << "Paper covers rock.";
    }
}

// Question 7
void question7() {
    int year;
    
    cout << "Arabic to Roman numeral conversion\n";
    cout << "Input the integer to convert.\n";
    cin >> year;

    int n1000 = year / 1000;
    int n100 = (year / 100) % 10;
    int n10 = (year / 10) % 10;
    int n1 = year % 10;
}

// Question 8
void question8() {
    // Your code for Question 8
    // ...
    cout << "Horoscope program which examines compatible signs.\n";
    cout << "Input 2 signs: ";
}



