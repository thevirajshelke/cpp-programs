#include <iostream>
using namespace std;

float addition(float x, float y);
float subtraction(float x, float y);
float division(float x, float y);
float multiplication(float x, float y);

int main()
{
    float num1, num2;
    int choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Press any of the following number:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "The addition of " << num1 << " & " << num2 << " is " << addition(num1, num2) << endl;
        break;

    case 2:
        cout << "The subtraction of " << num1 << " & " << num2 << " is " << subtraction(num1, num2) << endl;
        break;
    case 3:
        cout << "The multiplication of " << num1 << " & " << num2 << " is " << multiplication(num1, num2) << endl;
        break;
    case 4:
        cout << "The division of " << num1 << " & " << num2 << " is " << division(num1, num2) << endl;
        break;
    default:
        cout << "Invalid Option Selected!" << endl;
    }
    return 0;
}

float addition(float x, float y)
{
    return x + y;
}

float subtraction(float x, float y)
{
    return x - y;
}

float division(float x, float y)
{
    return x / y;
}

float multiplication(float x, float y)
{
    return x * y;
}