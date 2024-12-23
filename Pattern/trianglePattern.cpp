#include <iostream>
using namespace std;

int main()
{
    int i, n = 5;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}