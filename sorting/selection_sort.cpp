#include<iostream>

using namespace std;

void selection(int A[],int n){
    int min;
    for (int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min])
                min=j;
        }
        int temp = A[min];
        A[min]=A[i];
        A[i]=temp;
    }
}


int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    selection(A,n);

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
return 0;
}