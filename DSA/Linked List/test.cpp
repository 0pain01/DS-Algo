#include<iostream>
#include<cmath>

using namespace std;

float func(int n){
    int i;
    float x=0;
    for(i=2;i<=n;i++)
        x=x+log10(i);
    return x;
}

int main(){
    int n;
    cin>>n;
    cout<<floor(func(n))+1;
  return 0;
}
