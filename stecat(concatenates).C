#include<stdio.h>
#include<string.h>
int main(){
    char rakesh[10];
    printf("enter rakesh string\n");
    scanf("%s", &rakesh);
    strcat(rakesh, "rakesh");
    printf("%s", rakesh);
}
