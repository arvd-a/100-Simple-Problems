#include <iostream>
using namespace std;

int main() {
    float c;

    //Assigning the temperature value in Celsius
    cout << "Enter the temperature in Celsius: ";
    cin >> c;

    //Converting the value to Fahrenheit
    float f = c*1.8 + 32;

    //Printing the value of temperature in Fahrenheit
    cout << "The temperature is " << f << " degree Fahrenheit";

    return 0;
}