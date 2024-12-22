#include <iostream>
using namespace std;
int main()
{
    int size, i;
    cin >> size;
    int arr[size];
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array elements are: ";
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;

    return 0;
}