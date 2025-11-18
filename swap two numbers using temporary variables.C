#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;  // store a in temp
    a = b;     // assign b to a
    b = temp;  // assign temp to b

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}
