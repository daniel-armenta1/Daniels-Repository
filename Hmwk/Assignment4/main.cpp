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

// Function prototype q6-7
float calcMpg(float mls, float lts);
//Function prototype q8-9
float calcInf(float yrAgoPrice, float curPrice);
float pr1yr(float curPrice, float inflation);
float pr2yr(float curPrice, float inflation);
// Function for two parameters q10
float getMax(float num1, float num2);
// Function for three parameters q10
float getMax(float num1, float num2, float num3);

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
     int number, sum = 0;

    cin >> number;

    // Check if the entered number is positive
    if (number <= 0) {
        cout << "Please enter a positive integer." << std::endl;
    }

    // Calculate the sum using a loop
    for (int i = 1; i <= number; ++i) {
        sum += i;
    }

    // Display sum
    cout << "Sum = " << sum;
}
//q2
void question2() {
   //declare all variables
    int numDays;
    double penny = 0.01;
    double totalEarnings = 0.0;  
    //ask for num of days worked
    cin >> numDays;

    // Check if the entered num of days is less than 1
    if (numDays < 1) {
        cout << "Please enter a number of days greater than or equal to 1." << std::endl;
    }

    for (int day = 1; day <= numDays; ++day) {
        totalEarnings = totalEarnings + penny * pow(2, day - 1);
       // pow meaning power to for exponents
    }

    // Display the result in dollars
    cout << "Pay = $" << fixed << std::setprecision(2) << totalEarnings;

}
//q3
void question3() {
int num;//input nums
    int smallest = INT_MAX; // Initialize smallest with the largest possible num 
    int biggest = INT_MIN; // Initialize biggest with the smallest possible num

    while (true) {
        cin >> num;//infinite loop for numbers to be input

        if (num == -99) {//infinite loop stops when -99 is entered
            break;
        }

        smallest = min(smallest, num);//pulling smallest num
        biggest = max(biggest, num);//pulling biggest num
    }
//dislaying results
    cout << "Smallest number in the series is " << smallest << endl;
    cout << "Largest  number in the series is " << biggest;
}
//q4
void question4() {
 //declaring  length and the letter used
    int length;
    char letter;
    // if the input fails (i had to search for that for while because my code would NOT work) or if the input is 
    if (!(cin >> length) || length < 1 || length > 15) { //less than 1 or more than15 it will display invalid input
        cout << "Invalid input." << endl;
    }
    //input letter
    cin >> letter;
    
    // nested for loop to determinje the length 
    for (int i = 0; i < length; ++i) {
        for (int i2 = 0; i2 < length; ++i2) {
            cout << letter;
        }
        // Add new line for all the rows except the last one
        if (i < length - 1) {
            cout << endl;
        }
    }
}
void question5() {
    //initialize number
    int num ;
    cin >> num;
    // Increase nested for loop
    for (int i = 1; i <= num; ++i) { 
        for (int i2 = 0; i2 < i; ++i2) { 
            cout << "+";
        }
       //created newlines in between
        cout << endl << endl;
    }
    // Decrease nested for loop
    for (int i = num; i > 0; --i) {
        for (int i2 = 0; i2 < i; ++i2) {
            cout << "+";
        }
     if (i > 1) {
            cout << endl << endl; //create new line except for last row
       }
    }
}
//q6
void question6() {
const float LITERS_PER_GALLON = 0.264179;

    char repeat; // Use char to store 'y' or 'n'
    
    do {
        float m, l;

        // Input the number of liters and miles
        cout << "Enter number of liters of gasoline:\n";
        cin >> l;
        cout << endl;
        cout << "Enter number of miles traveled:\n";
        cin >> m;
        cout << endl;

        // Calculate mpg using function
        float mpg = calcMpg(m, l);

        // Display the result
        cout << "miles per gallon:\n";
        cout << fixed << setprecision(2) << mpg << endl;

        // Ask the user if they want to repeat the calculation
      cout << "Again:\n";
      cin >> repeat;
      if(repeat == 'y' || repeat == 'Y') {
          cout << endl;
      }
        
        // make sure input is y or Y
    } while (repeat == 'y' || repeat == 'Y'); {
    
    }
}
//q7
void question7() {
    const float LITERS_PER_GALLON = 0.264179;

    char repeat; // Use char to store 'y' or 'n'
    
    do {
        float m1, l1, m2, l2;
      
        //user input for car 1
        cout << "Car 1\n";
        cout << "Enter number of liters of gasoline:\n";
        cin >> l1;
        cout << "Enter number of miles traveled:\n";
        cin >> m1;
        //using function
        float mpg1 = calcMpg(m1, l1);
         cout << "miles per gallon: " << fixed << setprecision(2) << mpg1 << endl << endl;

        //user input for car 2
        cout << "Car 2\n";
        cout << "Enter number of liters of gasoline:\n";
        cin >> l2;
        cout << "Enter number of miles traveled:\n";
        cin >> m2;
        //using function
        float mpg2 = calcMpg(m2, l2);
        cout << "miles per gallon: " << fixed << setprecision(2) << mpg2 << endl << endl;

        // Compare fuel efficiency of Car 1 and Car 2
        if (mpg1 > mpg2) {
            cout << "Car 1 is more fuel efficient\n";
        } 
        else if (mpg2 > mpg1) {
            cout << "Car 2 is more fuel efficient\n";
        } 
 
        cout << endl;

        // Ask the user if they want to repeat the calculation
        cout << "Again:\n";
        cin >> repeat;
        if (repeat == 'y' || repeat == 'Y') {
            cout << endl;
        }
        
        // make sure input is y or Y
    } while (repeat == 'y' || repeat == 'Y');

}
//q8
void question8() {
    char repeat; //yes or no

    do {
        float yrAgoPrice, curPrice;

        cout << "Enter current price:\n";
        cin >> curPrice;
        cout << "Enter year-ago price:\n";
        cin >> yrAgoPrice;

        // Calc the inflation using the function
        float inflation = calcInf(yrAgoPrice, curPrice);

        // Display the result
        cout << "Inflation rate: " << fixed << setprecision(2) << inflation << "%\n";
        cout << endl;
        // Ask the user if they want to repeat the calculation
        cout << "Again:\n";
        cin >> repeat;
        if (repeat == 'y' || repeat == 'Y') {
            cout << endl;
        }
        // make sure input is y or Y
    } while (repeat == 'y' || repeat == 'Y');
}
void question9() {
     char repeat; // yes or no

    do {
        float yrAgoPrice, curPrice;

        cout << "Enter current price:\n";
        cin >> curPrice;
        cout << "Enter year-ago price:\n";
        cin >> yrAgoPrice;

        // Calculate the inflation using the function
        float inflation = calcInf(yrAgoPrice, curPrice);

        // Display the result
        cout << "Inflation rate: " << fixed << setprecision(2) << inflation << "%\n";
        cout << endl;

        // Calculate estimated prices in one and two years
        float yr1Pr = pr1yr(curPrice, inflation);
        float yr2Pr = pr2yr(curPrice, inflation);

        // Display the estimated prices
        cout << "Price in one year: $" << fixed << setprecision(2) << yr1Pr << endl;
        cout << "Price in two year: $" << fixed << setprecision(2) << yr2Pr << endl;
cout << endl;
        // Ask the user if they want to repeat the calculation
        cout << "Again:\n";
        cin >> repeat;
        if (repeat == 'y' || repeat == 'Y') {
            cout << endl;
        }
        // make sure input is y or Y
    } while (repeat == 'y' || repeat == 'Y');
}
void question10() {
   float num1, num2, num3; 
    //input nd user output
    cout << "Enter first number:\n";
    cin >> num1;
    cout << endl;
    cout << "Enter Second number:\n";
    cin >> num2;
    cout << endl;
    cout << "Enter third number:\n";
    cin >> num3;
    cout << endl;
    // Find the maximum of two numbers
    float max1 = getMax(num1, num2);
    cout << "Largest number from two parameter function:\n";
    cout << max1 << endl;
    cout << endl;
    // Find the maximum of three numbers
    float max2 = getMax(num1, num2, num3);
    cout << "Largest number from three parameter function:\n";
    cout << max2 << endl;
 
}
// Function definition q6
float calcMpg(float mls, float lts) {
    const float LITERS_PER_GALLON = 0.264179;
    float gal = lts * LITERS_PER_GALLON;
    float mpg = mls / gal;
    return mpg;
}
// Function definition to calculate the rate of inflation q8-9
float calcInf(float yrAgoPrice, float curPrice) {
    // Calculate rate of inflation as difference in price divide by the yr ago price
    float inflation = ((curPrice - yrAgoPrice) / yrAgoPrice) * 100.0;
    return inflation;
}
//definition of function of 1 year price q9
float pr1yr(float curPrice, float inflation) {
    return curPrice + (curPrice * inflation / 100.0);
}
//definition of function of 2 year price q9
float pr2yr(float curPrice, float inflation) {
    float yr1Pr = pr1yr(curPrice, inflation);
    return yr1Pr + (yr1Pr * inflation / 100.0);
}
// Function for two paras q10
float getMax(float num1, float num2) {
    return max(num1, num2);
}

// Function for three paras q10
float getMax(float num1, float num2, float num3) {
    return max({num1, num2, num3});
}