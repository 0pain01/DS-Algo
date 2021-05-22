#include<iostream>

using namespace std;

int main(){
    int num;
    int i,j,k,sum=0;
    int res[10];

    cout<<"Enter the number of variables: ";
    cin>>num;

    float arr[25][25];
    for(i=0;i<num;i++){
        for(j=0;j<(num+1);j++){
            cout<<"enter: "<<" a["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }


    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i>j)
            {
                float c =arr[i][j]/arr[j][j];
                for(k=0;k<(num+1);k++){    
                    arr[i][k]=arr[i][k]-c*arr[j][k];
                }
            }
        }
    }



    for(i=0;i<num;i++){
        for(j=0;j<(num+1);j++){
            cout<<arr[i][j]<<" ";    
        }
        cout<<"\n";
    }

    res[num-1]=arr[num-1][num]/arr[num-1][num-1];

    for(i=1;i<=num;i++){
        sum=(arr[i][num]-arr[i][i])/(arr[i][i+1]*res[num-i]);
        res[num-1-i]=sum;
    }


    return 0;
}