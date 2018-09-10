#include <iostream>
//include<iostream.h> //uncomment if using turbo c++
//include<conio.h> //uncomment if using turbo c++
using namespace std;

int main()
{
    int num, rev = 0, num1, digit;
    //clrscr(); //uncomment if using turbo c++
    cout << "Enter a number: " << endl;
    cin >> num;
    num1 = num; //Storing the user input as a backup!
    //logic to reverse the number!
    while(num){
        digit = num%10;
        num = num/10;
        rev = rev * 10 + digit;
    }
    //comparing the reversed number with the original number
    if(rev == num1){
        cout << "It is a Plaindrome number!" << endl;
    }
    else{
        cout << "It is not a Plaindrome number!" << endl;
    }
    //getch(); //uncomment if using turbo c++
    return 0;
}