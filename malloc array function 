#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int*) malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    for (int i = 0; i < 5; i++) {
        printf("%d \n", arr[i]);
    }
    return 0;
}