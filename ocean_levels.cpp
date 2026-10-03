/******************************************************************************
Made in OnlineGDB by C.J. Merendino
Lab 4 - Program 2 - Ocean-Level Projections
This program calculates and displays the projected ocean level rise over 5, 7, and 10 years based on an annual rate.
*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    // Named constant for the annual rise rate
    const double ANNUAL_RATE = 1.5;

    // Variables for the three different time periods
    int year_one = 5;
    int year_two = 7;
    int year_three = 10;

    // Variables to store projected rises
    double rise_one;
    double rise_two;
    double rise_three;

    // Calculate projections
    rise_one = ANNUAL_RATE * year_one;
    rise_two = ANNUAL_RATE * year_two;
    rise_three = ANNUAL_RATE * year_three;

    // Display results
    cout << "In " << year_one << " years, the ocean level will rise by " << rise_one << " millimeters." << endl;
    cout << "In " << year_two << " years, the ocean level will rise by " << rise_two << " millimeters." << endl;
    cout << "In " << year_three << " years, the ocean level will rise by " << rise_three << " millimeters." << endl;

    return 0;
}