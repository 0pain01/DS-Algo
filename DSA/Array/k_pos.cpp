#include<iostream>

using namespace std;


int main(){
    int i,j,n,k,temp;

    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter positon:";
    cin>>k;
    
    for(i=0;i<=(k-1)/2;i++){
        temp=arr[i];
        arr[i]=arr[k-i-1];
        arr[k-1-i]=temp;
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    j=0;
    for(i=k;i<=k+(n-1-k)/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-j];
        arr[n-1-j]=temp;
        j++;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}