//Question 5
// how will determine the positions in 2d arrays in 4x4 matrix.
#include <stdio.h>
int main() {
    int a[4][4],i,j;
    printf("Enter elements of 4x4 matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\n Element at position (%d,%d): ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix with positions:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("a[%d][%d]=%d\t",i,j,a[i][j]);
        printf("\n");
    }
    return 0;
}

