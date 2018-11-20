#include <iostream>
using namespace std;

int linear_search_number(int *ptr, int len, int num);

int main()
{
    int x[10], num;
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
        cin >> x[i];
    cout << "Enter the number that you want to search: ";
    cin >> num;
    linear_search_number(x, sizeof(x) / sizeof(x[0]), num) ? cout << "The number was found!" << endl : cout << "The number was not found" << endl;
    return 0;
}

int linear_search_number(int *ptr, int len, int num)
{
    int i;
    for (i = 0; i < len; i++)
        if (*(ptr + i) == num)
            break;
    if (i == len)
        return 0;
    else
        return 1;
}
