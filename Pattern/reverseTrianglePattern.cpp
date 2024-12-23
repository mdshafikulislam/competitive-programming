#include <iostream>
using namespace std;

int main()
{
    int i, n = 5;

    for (i = 5; i > 0; i--)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}