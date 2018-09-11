#include <iostream>
//include<iostream.h> //uncomment if using turbo c++
//include<conio.h> //uncomment if using turbo c++
using namespace std;

int main()
{
    int num;
    unsigned long long int fact = 1;
    //clrscr(); //uncomment if using turbo c++
    cout << "Enter a number:" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++){
        fact = fact * i;
    }
    cout << "The factorial of " << num << " is " << fact << endl;
    //getch(); //uncomment if using turbo c++
    return 0;
}