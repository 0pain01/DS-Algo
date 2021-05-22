#include<iostream>

using namespace std;

int main(){
    int i,n,len=0;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])
            arr[len++]=arr[i];
    }
    arr[len++]=arr[n-1];

    for(i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }

}