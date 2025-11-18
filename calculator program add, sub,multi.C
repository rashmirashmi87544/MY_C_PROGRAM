#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter an operator(=,-,*,/): ");
    scanf("%d %c %d", &a, &op, &b);
    if(op == '+')
        printf("Result = %d", a + b);
    else if(op == '-')
        printf("Result = %d", a - b);
    else if(op == '*')
        printf("Result = %d", a * b);
    else if(op == '/')
        printf("Result = %d", a / b);
    else
        printf("Invalid operator");

    return 0;
}
