#include <iostream>
using namespace std;

int main()
{
   int i,n=5;
   for(i=1 ; i<n;i++){
       for(int j=1;j<i+1;j++){
           cout <<i <<" ";
       }
       cout<<endl;
   }

    return 0;
}