#include <stdio.h>
int main()
{
int marks;
printf("Enter your marks: ");
scanf("%d", &marks);
if (marks >= 50) {
if (marks >= 90) { printf("Grade: A\n");
} else if (marks >= 75) { printf("Grade: B\n");
} else {
printf("Grade: C\n");
}
} else {
printf("Grade: F\n");
}
}
