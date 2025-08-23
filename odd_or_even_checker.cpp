#include <iostream>
using namespace std;

int main() {
    //Assigning number
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //Modulus(remainder) with 2
    int mod = num % 2;

    //Checking whether odd or even
    if (mod == 0) {
        cout << "The number is even" << endl;
    }else {
        cout << "The number is odd";
    }

    return 0;
}