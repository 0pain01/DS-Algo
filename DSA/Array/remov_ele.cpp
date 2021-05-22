#include<iostream>
using namespace std;

int main(){
    int i,n,x,num,temp;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];

    for (i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the elment to be removed:";
    cin>>num;

    for(i=0;i<n;i++){
        if (arr[i]==num){
            x=i;
            break;    
        }
    }

    for(i=x;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}