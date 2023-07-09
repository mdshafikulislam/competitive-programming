#include<iostream>

using namespace std;

int main(){


int arr[]={12,23,45,1,-2,6,100,-6};
int size=sizeof(arr)/sizeof(arr[0]);
int n;
bool  found=false;
cout<<"Enter the elememt to search : ";
cin>>n;


for(int i=0;i<size;i++){
     if(arr[i]== n){
        //found=true;
        cout<<"Element :"<<n <<" Fount at Index :" <<i;
        break;
     }
}

if(!found){
    cout<<"Element :"<<n<<"Not found in the array"<<endl;
}


return 0;

}
