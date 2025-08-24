#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //User input for the number to be cubed
    int num;
    cout << "Enter the number to be cubed: ";
    cin >> num;

    //Finding the cube of the number and printing it
    double cube = pow(num, 3);
    cout << "The cube of the number " << num << " is " << cube;


    return 0;
}