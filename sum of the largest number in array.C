#include<stdio.h>
int main(){
    int a[6]={1,3,2,4,6,7,};
    int max = a[0];
    for (int i=1; i<6; i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    printf("%d",max);
        }
