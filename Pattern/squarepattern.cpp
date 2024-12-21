// n=4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <iostream>
using namespace std;

int main()
{
    int number = 4;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
