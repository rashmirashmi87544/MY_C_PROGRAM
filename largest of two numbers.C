#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a,&b);
    if(a > b)
      printf("largest = %d",a);
    else
      printf("largest =%d",b);
    return 0;
}
