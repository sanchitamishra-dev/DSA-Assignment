//Question 4
// Implement a merge sort in an array
// arr = 4,14,28,30,78,81,2,1,0,6]
#include <stdio.h>
void merge(int a[],int l,int m,int r){
    int i=l,j=m+1,k=0,b[r-l+1];
    while(i<=m && j<=r){
        if(a[i]<a[j]) b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    while(i<=m) b[k++]=a[i++];
    while(j<=r) b[k++]=a[j++];
    for(i=0;i<k;i++) a[l+i]=b[i];
}
void mergesort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int a[]={4,14,28,30,78,81,2,1,0,6},n=10,i;
    mergesort(a,0,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
}

