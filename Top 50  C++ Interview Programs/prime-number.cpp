// C++ Program to check Prime Number

#include <iostream>
using namespace std;
int main()
{

    int number, i, count = 0;
    cout << "Enter the Number:";
    cin >> number;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            count++;
            cout << "Not Prime" << endl;
            break;
        }
        else
        {
            cout << "Prime" << endl;
            break;
        }
    }
    return 0;
}
