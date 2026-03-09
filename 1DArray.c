#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
     //int arr[n];
     printf("Enter the size of the array:");
     scanf("%d",&n);
     int *arr=(int*)malloc(n * sizeof(int));
     
     printf("Enter the array elements:\n");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     
     for(int i=0;i<n;i++){
        sum+=arr[i];
     }
     printf("\nSum : %d",sum);
     free(arr);
    
    return 0;
    
}
