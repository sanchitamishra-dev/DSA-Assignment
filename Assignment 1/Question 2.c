// Question 2
// find how you will rotate an array.
#include <stdio.h>
int main() {
    int n, d, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    printf("Enter number of positions to rotate: ");
    scanf("%d", &d);
    for(i=0; i<d; i++) {
        temp = a[0];
        for(j=0; j<n-1; j++)
            a[j] = a[j+1];
        a[n-1] = temp;
    }
    printf("Array after rotation: ");
    for(i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}


