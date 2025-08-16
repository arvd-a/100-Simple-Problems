#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    //Assigining the 1st number
    cout << "Enter a number: ";
    cin >> a;

    //Assigning the 2nd number
    cout << "Enter a number: ";
    cin >> b;
    
    int sum = a + b;

    cout << "The sum of " << a << " and " << b << " is " << sum;

    return 0;
}