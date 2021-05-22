#include<stdio.h>

int main(){
    int num;
    int i,j,k;

    printf("Enter the number of variables: ");
    scanf("%d",&num);

    float arr[25][25];
    for(i=0;i<num;i++){
        for(j=0;j<(num+1);j++){
            printf("enter: a[%d][%d]: ",i,j);
            scanf("%f",&arr[i][j]);
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
            printf("%f",arr[i][j]);    
        }
        printf("\n");
    }

    return 0;
}