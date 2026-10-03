/******************************************************************************
Made in OnlineGDB by C.J. Merendino
Lab 4 - Program 1 - Average of Five Values
This program calculates and displays the sum and average of five specific values.
*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    // Store five assigned values
    double val1 = 28.0;
    double val2 = 32.0;
    double val3 = 37.0;
    double val4 = 24.0;
    double val5 = 33.0;

    // Variables to store the calculated results
    double sum;
    double average;

    // Calculate sum and average
    sum = val1 + val2 + val3 + val4 + val5;
    average = sum / 5.0;

    // Display results
    cout << "The sum of the five values is: " << sum << endl;
    cout << "The average of the five values is: " << average << endl;

    return 0;
}