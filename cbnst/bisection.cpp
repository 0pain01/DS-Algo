#include<iostream>
#include<cmath>

using namespace std;

float f(float n){
    float x=n,f;
    f = pow(x,3)-4*x-9;
    return f;
}

float bsc(float a, float b){
    float c = (a+b)/2;
    return c;
}

int main(){
    float a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    
    if((f(a)*f(b))>0){
        cout<<"Enter again!!";
    }
    else if((f(a)*f(b))==0){
        if(f(a)==0)
            cout<<a<<" is the solution";
        else
            cout<<b<<" is the solution";
    }

    else if((f(a)*f(b))<0){ 
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
            if((f(a)*f(c))<0)
                b=c;
            else
                a=c;

            temp=c;
            cout<<"result: "<<c<<endl;
        }
    }
    return 0;
}