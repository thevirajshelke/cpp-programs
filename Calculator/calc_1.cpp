#include <iostream>
//include<iostream.h> //uncomment if using turbo c++
//include<conio.h> //uncomment if using turbo c++
using namespace std;

int main()
{
    float a, b;
    int choice;
    //clrscr(); //uncomment if using turbo c++
    cout << "Select any one of the following:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> choice;

    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    if (choice == 1)
    {
        cout << "The addition of two numbers " << a << " & " << b << " is " << a + b << endl;
    }
    else if (choice == 2)
    {
        cout << "The subtraction of two numbers " << a << " & " << b << " is " << a - b << endl;
    }
    else if (choice == 3)
    {
        cout << "The multiplication of two numbers " << a << " & " << b << " is " << a * b << endl;
    }
    else if (choice == 4)
    {
        if (b == 0)
        {
            cout << "Division by zero is not possible!" << endl;
        }
        else
        {
            cout << "The division of two numbers " << a << " & " << b << " is " << a / b << endl;
        }
    }
    else
    {
        cout << "Invalid Option Selected!";
    }
    //getch(); //uncomment if using turbo c++
    return 0;
}