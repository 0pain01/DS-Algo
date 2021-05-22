#include<iostream>

using namespace std;

void Insertion(int A[],int n){
    for (int i=1;i<n;i++){
        int x = A[i];
        int j=i-1;
        while(A[j]>x && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
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

    Insertion(A,n);

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
return 0;
}