//Question 1 
//Find the element using linear search,target = 8
// arr =[7,9,12,6,8,5,4]
#include <stdio.h>
int main() {
    int arr[] = {7,9,12,6,8,5,4};
    int n = 7, target = 8, i, found = 0;
    for(i=0;i<n;i++){
        if(arr[i]==target){
            printf("Element %d found at position %d", target, i);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Element %d not found", target);
    return 0;
}

