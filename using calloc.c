#include<stdio.h>
#include<stdlib.h>
int main(){
    int *raj;
    raj=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++) {
        printf("enter elements\n");
        scanf("%d", &raj[i]);
    }
    for(int i=0;i<5;i++){
    printf("%d\n",raj[i]);
}
}
