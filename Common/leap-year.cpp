#include <iostream>
//include<iostream.h> //uncomment if using turbo c++
//include<conio.h> //uncomment if using turbo c++
using namespace std;
int isLeapYear(int year);

int main()
{
    //clrscr(); //uncomment if using turbo c++
    int year;
    cout << "Enter any year: " << endl;
    cin >> year;
    // isLeapYear will return 1 if it's a leap year else will return 0!
    // using ternary operator to reduce the code!
    isLeapYear(year)?cout << "It's a leap year!" << endl:cout << "It's not a leap year!" << endl;
    //getch(); //uncomment if using turbo c++
    return 0;
}

int isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}