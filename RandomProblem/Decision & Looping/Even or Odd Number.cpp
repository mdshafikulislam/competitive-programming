// even or odd number
#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Input the Number : ";
    cin >> number;

    if (number % 2 == 0) cout << "Even Number" << endl;
    else cout << "Odd Number" << endl;

    //or Ternary Operator in C++
    string result = (number % 2 == 0) ? "Even" : "Odd";
    cout << result;
    return 0;
}
