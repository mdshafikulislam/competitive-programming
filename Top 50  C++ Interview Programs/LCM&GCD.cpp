#include<iostream>

using namespace std;

int main(){
    int number1,number2,gcd,lcm,remainder;

    cout<<"1st input Number:";
    cin>>number1;

    cout<<"2nd input Number:";
    cin>>number2;

    int num1=number1;
    int num2=number2;

    while(num2 != 0){
        remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
    gcd=num1;
    lcm=(number1*number2)/gcd;

    cout<<"Greatest common divisor of : "<<gcd<<endl;
    cout<<"Greatest common divisor of : "<<lcm;


    return 0;
}
