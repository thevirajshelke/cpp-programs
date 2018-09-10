#include<iostream>
//include<iostream.h> //uncomment if using turbo c++
//include<conio.h> //uncomment if using turbo c++
using namespace std;

/*
int main(){
    //clrscr(); //uncomment if using turbo c++
    int a = 10, b = 20 , c;
    c = a / b;
    cout << "The division of two numbers is " << c << endl;
    //getch(); //uncomment if using turbo c++
    return 0;
}
*/

/*
int main(){
    //clrscr(); //uncomment if using turbo c++
    int a = 10, b = 20;
    cout << "The division of two numbers is " << a / b << endl;
    //getch(); //uncomment if using turbo c++
    return 0;
}
*/

/*
int main(){
    //clrscr(); //uncomment if using turbo c++
    int a, b, c;
    cout << "Enter two numbers:" << endl;
    if(b==0){
        cout << "Division by zero is not possible!" << endl;
    }
    else{
        c = a / b;
        cout << "The division of two numbers " << a << " & " << b <<  " is " << c << endl;
    }

    //getch(); //uncomment if using turbo c++
    return 0;
}
*/


int main(){
    //clrscr(); //uncomment if using turbo c++
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    //Division by zero is Infinity/Not Defined! So we need to check if the second number is 0
    //Computer cannot handle divide by zero!
    if(b==0){
        cout << "Division by zero is not possible!" << endl;
    }
    else{
        cout << "The division of two numbers " << a << " & " << b <<  " is " << a / b << endl;

    }
    //getch(); //uncomment if using turbo c++
    return 0;
}
