#include<iostream>

using namespace std;

int main(){
  int i,num=0;
  cout<<"enter unkown var: ";
  cin>>num;
  int arr[20][20];
  for(int i=0;i<num;i++)
  {
      for(int j=0;j<num+1;j++){
          cin>>arr[i][j];
      }
  }

  for(int i=0;i<num;i++)
  {
      for(int j=0;j<num+1;j++){
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }

/*
  for(int i=0;i<num-1;i++){
      for(int j=i+1;j<num;j++){
          int x= arr[j][i]/arr[i][i];
          for(int k=0;k<num+1;k++){

              arr[j][k]=arr[j][k]-x*arr[i][k]; 
           
          }
      }
  }

  */

  // backward substitution
   for( i=num-2;i>=0;i++){
       int s=0;
       for(int j=i+1;j<num;j++)
            s=s+arr[i][j]*x[j];
       int x[i]=(arr[i][num]-s)/arr[i][i];
   }

  for(int i=0;i<num;i++)
  {
      for(int j=0;j<num+1;j++){
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }
  return 0;
}