//Question 2 
//Find the element using binary search 
//target = 18
// arr =[7,6,9,6,8,7,12,14,15,18,19,20,21]
#include <stdio.h>
int main() {
    int arr[] = {6,6,7,7,8,9,12,14,15,18,19,20,21};
    int n = 13, target = 18, low = 0, high = n-1, mid, found = 0;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == target) {
            printf("Element %d found at position %d", target, mid);
            found = 1;
            break;
        } else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(!found)
        printf("Element %d not found", target);
    return 0;
}

