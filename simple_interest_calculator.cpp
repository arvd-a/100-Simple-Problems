#include <iostream>
using namespace std;

int main() {
    float principal_value;
    float rate;
    float time;

    //Assigning value for Principal vale
    cout << "Enter the Principal value: ";
    cin >> principal_value;

    //Assigning value for rate of interest
    cout << "Enter the rate of interest: ";
    cin >> rate;

    //Assigning value for time
    cout << "Enter the time(in years): ";
    cin >> time;
    cout << endl;

    //Calculating the Simple Interest
    float simple_interest = principal_value * rate * time / 100;
    cout << "The simple interest is " << simple_interest;

    cout << endl;

    //Showing the final value(with Simple interest)
    float total_value = principal_value + simple_interest;
    cout << "The total value is " << total_value;

    return 0;
}