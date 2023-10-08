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