#include<stdio.h>
void main(){
 int arr[5]={1,2,3,4,5};
 int value,pos;
 int n=5;
 printf("Enter the position to insert:");
 scanf("%d",&pos);
 printf("Enter the value which want you insert in the array:");
 scanf("%d",&value);
 
 for(int i=n;i>pos-1;i--){
 arr[i]=arr[i-1];
 }
 arr[pos-1]=value;
 n++;
 printf("array after insertion :\n");
 for(int i=0;i<n;i++){
 printf("%d ",arr[i]);
 }
}