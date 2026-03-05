#include<stdio.h>

int main(){
    int i=0;
    char str[100];

    printf("Enter the Lower case string:");
    scanf("%s",str);
   
    while(str[i]!='\0'){
        
        str[i]=str[i]+32;
         i++;
        
    }
    printf("Upper case string is :%s",str);
    return 0;

}