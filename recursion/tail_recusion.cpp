// A recursive function is called tail recursive if the recursive call is the last thing done by the function
// There is no need of keeping record of previous record

#include<iostream>

using namespace std;

void fun(int num){
    if (num==0)
        return ;
    else
        cout<<num<<" ";
    return fun(num-1);
}

int main(){
    fun(3);
    return 0;
}