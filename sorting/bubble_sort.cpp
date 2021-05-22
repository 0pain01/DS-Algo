#include<iostream>

using namespace std;

void Bubble(int A[],int n){
    int flag =1;
    for (int i=n-1;i>=0 && flag!=0 ;i--){
        flag=0;
        for(int j=0;j<=i-1;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;             
                flag=1;
            }
        }
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

    Bubble(A,n);

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
return 0;
}