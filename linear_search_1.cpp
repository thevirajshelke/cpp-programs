#include <iostream>
using namespace std;

int main()
{
    int x[10], num, i;
    cout << "Enter 10 numbers: " << endl;
    for (i = 0; i < 10; i++)
        cin >> x[i];
    cout << "Enter the number that you want to search: ";
    cin >> num;
    for (i = 0; i < 10; i++)
        if (x[i] == num)
            break;
    if (i == 10)
        cout << "The number was not found!" << endl;
    else
        cout << "The number was found!" << endl;
    return 0;
}
