#include <iostream>
using namespace std;

int main() {
    int first_variable;
    int second_variable;

    //Assigning values for the 2 variables
    cout << "Enter a value for the first variable: ";
    cin >> first_variable;

    cout << "Enter a value for the second variable: ";
    cin >> second_variable;

    cout << endl;

    //Showing the values in each variables
    cout << "The value assigned to the first variable is " << first_variable << endl;
    cout << "The value assigned to the second variable is " << second_variable << endl;

    cout << endl;

    //Swapping 
    int temp = first_variable;
    first_variable = second_variable;
    second_variable = temp;

    //Showing after the swap
    cout << "After swapping, " << endl;
    cout << "The value in the first variable: " << first_variable << endl;
    cout << "The value in the second variable: " << second_variable;

    return 0;
}