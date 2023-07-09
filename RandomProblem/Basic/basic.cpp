#include <bits/stdc++.h>
using namespace std;

int main() {
    int num,i;
    cin>>num;
    bool isPrime=true;

    if(num==0 && num== 1){
        isPrime=false;
    }

    for(i=2;i<=num/2;i++){
        if(num % i == 0 ){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"Prime";
    }else cout<<"Not Prime";

	return 0;
}
