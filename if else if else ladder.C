#include <stdio.h>
int main() {
printf("The number is positive.\n");
int number;
printf("Enter an integer: ");
scanf("%d", &number);
if (number > 0) {
} else if (number < 0) { printf("The number is negative.\n");
} else {
printf("The number is zero.\n");
}
}
