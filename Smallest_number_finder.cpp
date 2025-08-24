#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    //User input for 2 numbers
    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    //Checking which number is smaller
    if (num1 < num2) {
        cout << "The number " << num1 << " is smaller than the number " << num2 << endl;
    } else {
        cout << "The number " << num2 << " is smaller than the number " << num1 << endl;
    }

    return 0;
}