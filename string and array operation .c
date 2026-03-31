#include<stdio.h>
#include<stdlib.h>

void arrayinput(int n,int *arr)
{
 printf("Enter yor array elements:");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
}
}
void arraydisplay(int n,int *arr)
{
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
}
}
void arraysearch(int key,int n,int *arr)
{
 printf("Enter yor array elements:");
 for(int i=0;i<n;i++)
 {
  if(arr[i]==key)
  {
   printf("The key is found at %d",key);
  }

  else{
   printf("key is not found");
  }
 }
}
void main()
{
  int key,n,choice,arr[100];
  while(1){
  printf("----Linear search operation----\n");
  
  printf("1.Input\n2.Display\n3.Search\nExit");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice){
  case 1:{
   printf("Enter the size of the array");
   scanf("%d",&n);
   arrayinput(n,arr);
   break;
  }
  case 2:{
   printf("The array elements are");
   arrayinput(n,arr);
   break;
  }
 case 3:{
   printf("Enter the value which want you");
   scanf("%d",&key);
   arraysearch(key,n,arr);
   break;
  }
  default:{
   exit(0);
  }
  }
  }
}
#include<stdio.h>
void main(){
 int arr[5]={1,2,3,4,5};
 int n=5;
 int value=99;
 int pos=3;
 for(int i=n;i>pos-1;i--){
 arr[i]=arr[i-1];
 }
 arr[pos-1]=value;
 n++;
 printf("array after insertion :\n");
 for(int i=0;i<n;i++){
 printf("%d",arr[i]);
 }
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={11,22,33,44};
int *ptr1;
ptr1 = &a; //ptr1 is a pointer to variable a
printf("The address of a=%p and value of a=%d\n",*ptr1,*ptr1);
}
