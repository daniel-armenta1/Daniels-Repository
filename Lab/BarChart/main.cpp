//Daniel Armenta
//Jan 17 2024 11:14PM

#include <iostream>

using namespace std;
        
        int main() {
    //initialize variables
            int str1, str2, str3, str4, str5;
            //user instructions
            cout << "Enter 5 numbers in hundreds regarding the sales of each 5 stores.\n";
            //inputting all 5 store sales
            cin >> str1 >> str2 >> str3 >> str4 >> str5;
    
            cout << "The sales chart will use a * to represent $100.\n";
            //the for statments are used to count the money made in hundred, divide it by a hundred and use each whole number as an asterisk
            std::cout << "Store 1 sales: ";
    for (int i = 0; i < str1 / 100; ++i) {
        std::cout << '*';
    }
    std::cout << std::endl;

    std::cout << "Store 2 sales: ";
    for (int i = 0; i < str2 / 100; ++i) {
        std::cout << '*';
    } 
    std::cout << std::endl;

    std::cout << "Store 3 sales: ";
    for (int i = 0; i < str3 / 100; ++i) {
        std::cout << '*';
    }
    std::cout << std::endl;

    std::cout << "Store 4 sales: ";
    for (int i = 0; i < str4 / 100; ++i) {
        std::cout << '*';
    }
    std::cout << std::endl;

    std::cout << "Store 5 sales: ";
    for (int i = 0; i < str5 / 100; ++i) {
        std::cout << '*';
    }
    std::cout << std::endl;

    return 0;
}
    


