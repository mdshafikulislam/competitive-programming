#include <bits/stdc++.h>
using namespace std;

int main() {

	int a,b,c;
	for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            if(b != a){
                for(c=1;c<=3;c++){
                    if(c!=b && c!=a){
                        cout<<a<<" "<<b<<" "<<c<<endl;
                    }

                }
            }
        }
	}
	return 0;
}
