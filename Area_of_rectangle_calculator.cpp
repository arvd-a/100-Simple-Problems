#include <iostream>
using namespace std;

int main() {
    int l;
    int b;

    //Assigning length for the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> l;

    //Assigning breadth for the rectangle
    cout << "Enter the breadth of the rectangle: ";
    cin >> b;

    //Calculating the area
    int area = l*b;

    //Printing the value of the area
    cout << "The area of the rectangle is " << area << " square units";

    return 0;
}