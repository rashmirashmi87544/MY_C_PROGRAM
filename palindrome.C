#include <stdio.h>
#include <string.h>
int main() {
   int num=121,original,rem,rev=0;
   original=num;
   while(num!=0){
       rem=num%10;
       rev=rev*10+rem;
       num/=10;
   }
   if (original==rev){
       printf("it is a polindrome");
   }
   else{
       printf("not a polindrom");
   }
}
