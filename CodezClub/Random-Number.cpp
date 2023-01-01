/*  C++ Program to Generate Random Numbers between 0 and 100  */

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i;
    int num;

    cout<<"Generating Random Numbers Below :: \n\n";
    for(i=1;i<=10;i++)
    {
        num=rand() % 100;
        cout<<" "<<num<<" ";
    }

    cout<<"\n";

    return 0;
}
