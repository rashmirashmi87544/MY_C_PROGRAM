#include<stdio.h>
int main()
{
    int n=10,f1=0,f2=1,f3;
    while( n!=0)
    {f3=f1+f2;
    f1=f2;
    f2=f3;
    printf("%d\n", f1);
    n--;
    }
}
