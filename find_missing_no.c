#include<stdio.h>


int missingNumber(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]>nums[j]){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    int s=0;
    for(int i=0;i<numsSize;i++){
        if(i!=nums[i]){
            s=i;
        }
    }
    return s;
}

void main(){
int n,k;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements :");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int result=missingNumber(arr,n);
printf("\nResult:%d",result);
}