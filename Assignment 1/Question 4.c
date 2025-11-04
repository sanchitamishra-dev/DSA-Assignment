// Question 4
//find the second minimum value in an array.
#include <stdio.h>
int main() {
    int n,i,min1,min2;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    if(a[0]<a[1]){min1=a[0];min2=a[1];}
    else{min1=a[1];min2=a[0];}
    for(i=2;i<n;i++){
        if(a[i]<min1){
            min2=min1;
            min1=a[i];
        } else if(a[i]<min2 && a[i]!=min1){
            min2=a[i];
        }
    }
    printf("Second minimum value: %d",min2);
    return 0;
}

