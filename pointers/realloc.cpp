#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int *ptr = (int*)malloc(7*sizeof(int));


   /* if(ptr!=NULL)
        cout<<"Memory Allocated!!"<<endl;

    *(ptr+0)=10;
    *(ptr+1)=20;*/

    ptr = (int*)realloc(ptr,5*sizeof(int));
    for(int i=0;i<2;i++)
    {
        cin >> *(ptr+i);
    }

    for(int i=0;i<5;i++){
        cout<<"Values in "<<i+1<<" position: "<<*(ptr+i) << " address: " << (ptr+i) <<endl;
    }

    return 0;


}