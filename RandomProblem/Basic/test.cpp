#include<iostream>
using namespace std;

int main(){
int i,size,n,largest,smallest;
cout<<"Enter the Array size : ";
cin>>n;
int arr[n];

for(i=0;i<n;i++){
    cout<<"Enter the Array Element : ";
    cin>>arr[i];
}
size=sizeof(arr[i])/sizeof(arr[0]);
largest=arr[0];
smallest=arr[0];

for(i=1;i<size;i++){
    if(arr[i]>largest){
        largest=arr[3];
    }
}
/*
for(i=0;i<size;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }
}
*/
/*
for(i=0;i<size;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }
}
*/
cout<<"This is the largest element of this array :"<<largest<<endl;
//cout<<"This is the smallest element of this array :"<<smallest<<endl;

return 0;


}
