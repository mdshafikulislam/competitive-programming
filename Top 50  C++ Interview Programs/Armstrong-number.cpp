#include <iostream>

using namespace std;

int main()
{
    int number, temp, i, r, sum = 0;
    cout << "Enter the Number :";
    cin >> number;
    temp = number;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    cout << sum;
    // cout << sum;
    if (number == sum)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "not Armstrong";
    }

    return 0;
}

/*
int main()
    {

    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        cout<<"sk"<<endl;
        int lastdigit=n%10;
         cout<<"lastdigit : "<<lastdigit<<endl;
        sum+= pow(lastdigit,3);
        cout<<sum<<endl;
        n=n/10;
        cout<<n<<endl;
    }
    if(sum == originaln){
        cout<<"armostrong Number"<<endl;
    }else{
        cout<<"Not armostrong Number"<<endl;
    }




    return 0;
}
*/
