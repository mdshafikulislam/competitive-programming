#include <iostream>

using namespace std;

int main()
{
    int number, temp, i, r, sum = 0;
    cout << "Enter the Number :";
    cin >> number;
    temp = number;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    cout << sum;
    if (number == sum)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "not Armstrong";
    }

    return 0;
}
