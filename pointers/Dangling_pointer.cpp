#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int *p = (int*)malloc(2*sizeof(int));
    p[0]=1;
    p[1]=2;

    free(p);  // memory used p is cleared

    p=NULL;   // the address stored by p pointer is nullified so that it does not point to the memory which does not hold that content anymore

    int *q = (int*)malloc(2*sizeof(int));
    q[0]=100;
    q[1]=200;

    cout<<"Values are : "<<p[0]<<" and "<<p[1];

    return 0;
}