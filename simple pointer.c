#include <stdio.h>
#include <string.h>
int main() {
    int num,*p;
    p=&num;
    printf("value of num=%d\n",num);
     printf("adress of num=%p\n",&num);
     printf("pointer p stores=%p\n",p);
     printf("valu using pointer=%d\n",*p);
     return 0;
}
