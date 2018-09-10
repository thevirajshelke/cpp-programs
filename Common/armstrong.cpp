#include <iostream>
//include<iostream.h> //uncomment if using turbo c++
//include<conio.h> //uncomment if using turbo c++
using namespace std;

int main()
{
    int num, num1, arm = 0, digit;
    //clrscr(); //uncomment if using turbo c++
    cout << "Enter a number: " << endl;
    cin >> num;
    num1 = num;
    while(num){
        digit = num%10;
        num = num/10;
        arm = arm + digit * digit * digit;
    }
    if(arm == num1){
        cout << "The number you entered is an Armstrong Number!" << endl;
    }
    else{
        cout << "The number you entered is not an Armstrong Number!" << endl;
    }
    //getch(); //uncomment if using turbo c++
    return 0;
}