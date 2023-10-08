// WAP TO FIND THE SUM, PRODUCT, DIFFERENCE.
#include <iostream>

int main() {
    using namespace std;

    // Declare variables to store user input
    int num1, num2;
    
    // Ask the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    // Arithmetic Operators
    int addition = num1 + num2;    // Addition
    int subtraction = num1 - num2; // Subtraction
    int multiplication = num1 * num2; // Multiplication
    int division = num1 / num2;    // Division
    int remainder = num1 % num2;    // Modulus (remainder)

    // Display the results of arithmetic operations
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus (Remainder): " << remainder << endl;

       return 0;
}
/*Enter the first number: 56
Enter the second number: 25
Addition: 81
Subtraction: 31
Multiplication: 1400
Division: 2
Modulus (Remainder): 6*/



