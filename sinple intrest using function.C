#include <stdio.h>
int sicalculator(){
    int p,t,r,si;
    printf("enter your principal amount \n");
    scanf("%d",&p);
    printf("enter number of year\n");
    scanf("%d",&t);
    printf("enter rate of interest\n");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("the simple intrest is :%d",&si);

}
int main() {
    sicalculator() ;
}
