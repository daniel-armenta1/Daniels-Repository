/* problem 6
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
     // initialize player 1 and 2
    char player1, player2;
    //title of program
    cout << "Rock Paper Scissors Game\n";
    cout << "Input Player 1 and Player 2 Choices\n";
    // Input from player 1
    cin >> player1;
    player1 = toupper(player1);  // Convert to uppercase
    // Input from player 2
    cin >> player2;
    player2 = toupper(player2);  // Convert to uppercase

    // Output to determine wunners
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

    return 0;
}

