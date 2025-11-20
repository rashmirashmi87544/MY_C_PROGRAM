#include<stdio.h>
int main(){
    char rashmi [20];
    printf("enter an array");
    fgets(rashmi, sizeof(rashmi),stdin);
    printf("%s", rashmi);
}
