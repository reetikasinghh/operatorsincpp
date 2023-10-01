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



/// ques: wap to find the grade
#include<iostream>
using namespace std;

int main() {
    int english, hindi, maths, science, sst, average;

    // Prompt the user to enter marks for each subject
    cout << "Enter marks for English: ";
    cin >> english;

    cout << "Enter marks for Hindi: ";
    cin >> hindi;

    cout << "Enter marks for Maths: ";
    cin >> maths;

    cout << "Enter marks for Science: ";
    cin >> science;

    cout << "Enter marks for SST: ";
    cin >> sst;

    // Calculate the average
    average = (english + hindi + maths + science + sst) / 5;

    // Determine the grade based on the average
    if (average >= 90) {
        cout << "Grade A+" << endl;
    } else if (average >= 80) {
        cout << "Grade A" << endl;
    } else if (average >= 70) {
        cout << "Grade B" << endl;
    } else if (average >= 55) {
        cout << "Grade C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}

/* OUTPUT 
Enter marks for English: 56
Enter marks for Hindi: 45
Enter marks for Maths: 78
Enter marks for Science: 98
Enter marks for SST: 45
Grade C*/
