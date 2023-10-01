#include <iostream>

int main() {
    using namespace std;

    // Declare and initialize two variables
    int num1 = 40;  // You can change these values to any integers you like
    int num2 = 50;  // You can change these values to any integers you like

    // Relational Operators
    if (num1 == num2) {
        // Checks if 'num1' is equal to 'num2'
        cout << "The two numbers are equal" << endl;
    }
    if (num1 != num2) {
        // Checks if 'num1' is not equal to 'num2'
        cout << "The two numbers are not equal" << endl;
    }
    if (num1 < num2) {
        // Checks if 'num1' is less than 'num2'
        cout << "The first number is less than the second number" << endl;
    }
    if (num1 > num2) {
        // Checks if 'num1' is greater than 'num2'
        cout << "The first number is greater than the second number" << endl;
    }
    if (num1 <= num2) {
        // Checks if 'num1' is less than or equal to 'num2'
        cout << "The first number is less than or equal to the second number" << endl;
    }
    if (num1 >= num2) {
        // Checks if 'num1' is greater than or equal to 'num2'
        cout << "The first number is greater than or equal to the second number" << endl;
    }

    return 0;
}
/*The two numbers are not equal
The first number is less than the second number
The first number is less than or equal to the second number*/


/*WAP TO FIND WHETHER THE NUMBER IS ODD EVEN OR ZERO*/
#include<iostream>
using namespace std;
int number;
int main()
{
cout<<"enter the first number:";
cin>>number;
if (number%2==0)
{cout<<"the number is even";}
else
{cout <<"the number is odd";}
}
/* OUTPUT: enter the first number:56
the number is even.
enter the first number:23
the number is odd*/

