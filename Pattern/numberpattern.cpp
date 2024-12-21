// n=4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

#include <iostream>
using namespace std;

int main()
{
    int number = 4;
    int num = 1;
    for (int i = 1; i < number; i++)
    {
        for (int j = 1; j < number; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
