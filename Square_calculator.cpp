#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //User input for the number to be squared
    int num;
    cout << "Enter the number to be squared: ";
    cin >> num;

    //Squaring the number and printing it
    double square = pow(num, 2);
    cout << "The square of the number " << num << " is " << square;

    return 0;
}