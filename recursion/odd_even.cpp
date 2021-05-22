#include<iostream>
int odd(int);
int even(int);
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        odd(i);
        cout<<odd(i)<<" ";
        }
    
    return 0;
}

int odd(int num){
    if (num%2!=0){
        return num+1;
    }
    else{
        even(num);
    }
}

int even(int num){
    if (num%2==0){
        return num-1;
    }
    else{
        odd(num);
    }
}