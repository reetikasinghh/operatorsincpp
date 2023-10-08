# operatorsincpp

1)Program Aim:
The aim of this program is to perform basic arithmetic operations (addition, subtraction, multiplication, division, and modulus) on two integers provided by the user and display the results.

Program Theory:

#include <iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

int main(): This is the entry point of the program. All C++ programs start execution from the main function.

Declaration of variables:

int num1, num2;: Declares two integer variables 'num1' and 'num2' to store user input.
Various integer variables are declared to store the results of arithmetic operations.
User input:

The program prompts the user to enter two numbers, 'num1' and 'num2', using cout and cin.
Arithmetic operations:

The program performs the following arithmetic operations:
Addition: num1 + num2
Subtraction: num1 - num2
Multiplication: num1 * num2
Division: num1 / num2
Modulus (remainder): num1 % num2
The results of these operations are stored in separate variables.
Display results:

The program uses cout to display the results of each arithmetic operation.
return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Prompt the user to enter the first number ('num1').
Prompt the user to enter the second number ('num2').
Perform the following arithmetic operations:
Addition: 'num1 + num2'
Subtraction: 'num1 - num2'
Multiplication: 'num1 * num2'
Division: 'num1 / num2'
Modulus (remainder): 'num1 % num2'
Display the results of each arithmetic operation using cout.
Terminate the program.
Program Conclusion:
This C++ program takes two integers as user input and performs basic arithmetic operations on them: addition, subtraction, multiplication, division, and modulus (remainder). The program then displays the results of these operations. It serves as an example of using arithmetic operators in C++.

2)Program Aim:
The aim of this program is to calculate the average of marks in five subjects (English, Hindi, Maths, Science, and SST) entered by the user and determine the grade based on the average.

Program Theory:

#include <iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

using namespace std;: This line allows us to use the standard C++ library (std) without explicitly specifying it in the code. It simplifies the code by eliminating the need to prefix elements from the standard library with "std::".

Declaration of variables:

int english, hindi, maths, science, sst, average;: Declares integer variables to store the marks in each subject and the calculated average.
User input:

The program prompts the user to enter marks for each subject (English, Hindi, Maths, Science, and SST) using cout and cin.
Average calculation:

The program calculates the average of the marks by summing up the marks in all subjects and dividing the sum by 5. The result is stored in the 'average' variable.
Grade determination:

The program uses an if-else ladder to determine the grade based on the average:
If the average is greater than or equal to 90, it assigns "Grade A+" to the student.
If the average is between 80 and 89, it assigns "Grade A."
If the average is between 70 and 79, it assigns "Grade B."
If the average is between 55 and 69, it assigns "Grade C."
If the average is below 55, it assigns "Fail."
Display the grade: The program uses cout to display the determined grade to the user.

return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Prompt the user to enter marks for each subject (English, Hindi, Maths, Science, SST).
Calculate the average of the marks.
Determine the grade based on the average using an if-else ladder.
Display the determined grade.
Terminate the program.
Program Conclusion:
This C++ program takes marks in five subjects as user input, calculates the average, and determines the grade based on the average. It serves as an example of conditional statements and basic arithmetic operations in C++. The program provides feedback on the student's performance in the form of a grade.

Example Output (for sample marks):
![image](https://github.com/reetikasinghh/operatorsincpp/assets/139485681/24363942-bdd1-4942-99b3-1cc2edd52b30)


