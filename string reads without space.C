#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("enter a name");
    scanf("%s",&name);
    int a=strlen(name);
    printf("%d",a);
}
