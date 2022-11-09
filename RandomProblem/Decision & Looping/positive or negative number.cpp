//Check if a Number is Positive or Negative in C++
#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Input the Number : ";
    cin >> number;

    if (number > 0) cout << "Positive Number" << endl;
    else if (number < 0) cout << "Negative Number" << endl;
    else cout << "Zero";

    //or Ternary Operator in C++
    string result = (number>0) ? "Positive" : "Negative";
    cout << result;
    return 0;
}
