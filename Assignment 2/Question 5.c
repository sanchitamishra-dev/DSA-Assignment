//Question 5
// By using selection sort in an array and also by searching method find the target element.
//target = 16
// arr=[5,12,14,16,17,21,1,5,4,3,0]
#include <stdio.h>
int main(){
    int a[]={5,12,14,16,17,21,1,5,4,3,0},n=11,i,j,min,t,target=16,found=0;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min]) min=j;
        t=a[i];a[i]=a[min];a[min]=t;
    }
    for(i=0;i<n;i++){
        if(a[i]==target){
            printf("Element %d found at position %d\n",target,i);
            found=1;break;
        }
    }
    if(!found) printf("Element %d not found\n",target);
    printf("Sorted array: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);
}

