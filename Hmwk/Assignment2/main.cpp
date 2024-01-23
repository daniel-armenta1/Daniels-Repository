//Daniel Armenta
//Jan 17 2024

#include <iostream>//input n output
#include <algorithm>//sorting
#include <iomanip> //for setprecision
#include <climits> // for intmax and min
#include <cmath> //for pow function
using namespace std;

//using to keep questions more organized
void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
void question7();
void question8();
void question9();
void question10();

int main() {
    char option;
    const char nOptions = 'T';//num of options 
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
        cout << "9 -> Question 9" << endl;
        cout << "T -> Question 10" << endl;
        cout << "Choose another option!" << endl;
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
            case '9':
                question9();
                break;
            case 'T': // need to keep as char so using T for Ten
                question10();
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}
//q1
void question1() {
   //initalize vars
double score1;
double score2;
double score3;
double score4;
double score5;
//output
cout << "Input 5 numbers to average.\n";
//5 inputs
cin >> score1;
cin >> score2;
cin >> score3;
cin >> score4;
cin >> score5;
//avg calculated
double  avg = (score1 + score2 + score3 + score4 + score5) / 5;

cout << "The average = " << fixed << setprecision (1) << avg;
}
//q2
void question2() {
 //variables
double calPerServe = 300;
double oneServe = 4;
double cookiesEaten;
//output
cout << "Calorie Counter\n";
cout << "How many cookies did you eat?\n";
//input
cin >> cookiesEaten;
//calculations
double serveAte = cookiesEaten / oneServe;
double calsAte = serveAte * calPerServe;
//results
cout << "You consumed " << calsAte << " calories.";
}
//q3
void question3() {
  //variable
float houseCost;
//title
cout << "Insurance Calculator\n";
//input 
cin >> houseCost;
//output 
cout << "How much is your house worth?\n";
//calculation of needed insured amt 
float insuredAmt = houseCost * 0.8;
//results
cout << "You need $" << insuredAmt << " of insurance.";
}
//q4
void question4() {
 // 2 variables
    double far, cel;
    //title
   cout << "Temperature Converter\n";
   cout << "Input Degrees Fahrenheit\n";
   //input temperature
   cin >> far;
   //formula for temperature conversion
   cel = 5.0 / 9.0 * (far - 32.0);
   //setp for decimals
   cout << fixed << setprecision(1);
   //output for results
   cout << far << " Degrees Fahrenheit = " << cel <<" Degrees Centigrade";
}
void question5() {
     //initialize variables
    double sine, cosine, tangent;
    double radians;
    int angle;
    //input angle
    cin >> angle;
    // titles
    cout << "Calculate trig functions\n";
    cout << "Input the angle in degrees.\n";
    //formula 
    radians = angle * (M_PI / 180.0);
    //cmath plugins 
    sine = sin(radians);
    cosine = cos(radians);
    tangent = tan(radians);
    
    //display results
    cout << "sin(" << angle << fixed << setprecision(4) << ") = " << sine << endl;
    cout << "cos(" << angle << fixed << setprecision(4) << ") = " << cosine << endl;
    cout << "tan(" << angle << fixed << setprecision(4) << ") = " << tangent;
}
//q6
void question6() {
  //variables
    float rate, hours, paychk;
    //titles
    cout << "This program calculates the gross paycheck.\n";
    cout << "Input the pay rate in $'s/hr and the number of hours.\n";
    //input
    cin >> rate;
    cin >> hours;
    //if else statement determining double time wage
    if (hours <= 40) {
        paychk = rate * hours;
    } else { paychk = (rate * 40) + 2 * rate * (hours - 40);
}
   //display results
    cout << fixed << setprecision(2) << "Paycheck = $ " << paychk;
}
//q7
void question7() {
//all constant variables
const float mouseWgt = 35.0;
const float mouseKill = 5.0;
const float sodaMass = 350.0;
const float sweetPer = 0.001;
//variables regarding weight of dieter
float dieterWgt, sodaMassHuman, humanKill;
int sodaLimit;// int because number of cans generally needs to stay whole
//titles
cout << "Program to calculate the limit of Soda Pop Consumption.\n";
cout << "Input the desired dieters weight in lbs.\n";
//eneter dieter weight
cin >> dieterWgt;
//calc dosage needed to kill human of inputted weight
 humanKill = (dieterWgt / mouseWgt) * mouseKill;
//calc soda mass for humans
    sodaMassHuman = sodaMass * sweetPer;
    sodaLimit = humanKill / sodaMassHuman;
    //results which i cant seem to get right.
    cout << "The maximum number of soda pop cans\n";
    cout << "which can be consumed is " << sodaLimit << " cans";
}    
//q8
void question8() {
       //constant vars regarding retro pay percent
    const float INC = 0.076;
    //vars for previous pay, retro pay, pay after retro pay and monthly pay
    float prevPay, retroPay, newPay, monthlyPay;
    //asking for input
    cout << "Input previous annual salary.\n";
    //Input
    cin >> prevPay;
    //amt given from retro percent (0.5 because 6 months is half a year)
    retroPay = prevPay * INC * 0.5;
    //new pay 
    newPay = prevPay + (retroPay * 2);
    //monthly pay calc
    monthlyPay = newPay / 12;
    //outputs
    cout << fixed << setprecision(2);
    cout << setw(3) << "Retroactive pay    = $  " << retroPay << endl;
    cout << setw(3) << "New annual salary  = $" << newPay << endl;
    cout << setw(3) << "New monthly salary = $ " << monthlyPay;
    //still cant get right, the retro pay was supposed to last for only 6 months why does the first test case
    // ask for the new annual salary to have 2152 instead of the rightful 2076?
}
//q9
void question9() {
    //ternary operator to simplify process
    int num, sumPos = 0, sumNeg = 0, totalSum = 0;

    cout << "Input 10 numbers, any order, positive or negative\n";
    //for loop asks for ten different numbers
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        if (num > 0) {
            sumPos = sumPos + num;
        } else {
            sumNeg = sumNeg + num;
        }
    }
    // display all sums
  cout << "Negative sum = " << sumNeg << endl;
    cout << "Positive sum =  " << sumPos << endl;
    cout << "Total sum    =   " << totalSum;
    //Exit stage right or left!
}
//q10
void question10() {
    cout << "didnt finish";
}

