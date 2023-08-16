// largestOfThree.cpp
//
// Programmer's name: Joseph Rentfrow
// Date: Aug 16, 2023

#include <iostream>

using namespace std;


int main()
{
    // Variable Declaration
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest = 0;

    // Getting the user's name
    cout << "Welcome to the largest of the three integers program.\n\n";
    string userName = "";
    cout << "Please enter your name: ";
    cin >> userName;

    // Getting the Numbers from User
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;

    // Processing the largest number
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            largest = num1;
        }
    }
    else
        if (num2 > num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }
    // Output
    cout << userName << " the largest number between " << num1 << ", " << num2 << " and " << num3 << " is "  << largest;
    return 0;
}
