//Question 3
//find the minimum value in an array.

#include <stdio.h>
int main() {
    int n,i,min;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("Minimum value: %d",min);
    return 0;
}

