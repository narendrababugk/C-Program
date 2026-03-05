#include<stdio.h>

int main(){
    int i=0;
    char str[100];

    printf("Enter the Upper case string:");
    scanf("%s",str);
   
    while(str[i]!='\0'){
        
        str[i]=str[i]+32;
         i++;
        
    }
    printf("Lower case string is : %s",str);
    return 0;

}