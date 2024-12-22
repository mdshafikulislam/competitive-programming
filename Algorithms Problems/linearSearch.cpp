#include <iostream>

using namespace std;

int linearSearch(int arr[], int num, int key)
{
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter a number: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << linearSearch(arr, size, key) << endl;
    return 0;
}