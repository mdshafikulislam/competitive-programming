#include <iostream>

using namespace std;

int main()
{
    int arr[100], i, n, x;

    cout << "Enter the Array Limit :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value :";
        cin >> arr[i];
    }

    cout << "Enter the Search Element:";
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "The Index Position :" << i << " "
                 << "Search Value :" << arr[i];
            return 0;
        }
        else
            cout << "Not found";
    }

    return 0;
}
