#include<iostream>
#include<cmath>

using namespace std;

float f(float n,int arr[],int p){
    float sum=0;
    for(int i=0;i<=p;i++){
        sum= sum+(arr[i]*pow(n,i));
    }
    return sum;
}

float bsc(float a, float b){
    float c = (a+b)/2;
    return c;
}

int main(){
    float a,b;
    int p;
    cout<<"enter the highest order of your equation:";
    cin>>p;
    int arr[p];
    cout<<"enter the coefficients:"<<endl;
    for(int i=0;i<=p;i++){
        cout<<"enter coefficient of x power "<<i<<" :";
        cin>>arr[i];
    }

    cout<<"enter two numbers: ";
    cin>>a>>b;
    
    if((f(a,arr,p)*f(b,arr,p))>0){
        cout<<"Enter again!!";
    }
    else if((f(a,arr,p)*f(b,arr,p))==0){
        if(f(a,arr,p)==0)
            cout<<a<<" is the solution";
        else
            cout<<b<<" is the solution";
    }

    else if((f(a,arr,p)*f(b,arr,p))<0){ 
        float itr,tol=0,temp=0;
        cout<<"enter iterations and tolerence: ";
        cin>>itr>>tol;
        for(int i=0;i<itr;i++){
            float c=bsc(a,b);
            float x=temp*(pow(10,tol));
            float y=c*(pow(10,tol));
            if(x==y){
                cout<<"result: "<<c<<endl;
                exit(0);
            }
            if((f(a,arr,p)*f(c,arr,p))<0)
                b=c;
            else
                a=c;

            temp=c;
            cout<<"result: "<<c<<endl;
        }
    }
    return 0;
}