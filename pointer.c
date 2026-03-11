#include<stdio.h>
void swapwithoutAddress(int n1,int n2){
 int temp;
 temp=n1;
 n1=n2;
 n2=temp;
}
void swapwithAddress(int *n1,int *n2){
 int temp;
 temp=*n1;
 *n1=*n2;
 *n2=temp;
}
int main()
{
 int num1=7,num2=10;
 swapwithoutAddress(num1,num2);
 printf("num1=%d\n",num1);
 printf("num2=%d\n\n",num2);
 
 
 swapwithAddress(&num1,&num2);
 printf("num1=%d\n",num1);
 printf("num2=%d\n",num2);
 
 }
