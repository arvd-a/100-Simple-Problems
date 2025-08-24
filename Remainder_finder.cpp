#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    //User input for the 2 numbers
    cout << "Enter a number to be divided by: ";
    cin >> num1;

    cout << "Enter the number to divide: ";
    cin >> num2;

    //Finding and showing the remainder
    int remainder = num1 % num2;
    cout << "The remainder when " << num1 << " is divided by " << num2 << " is " << remainder;

    return 0;
}