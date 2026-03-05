#include <stdio.h>
#include <string.h>

int main(){
    char str1[]="Narendra";
    char str2[100];
    
    int len=strlen(str1);
    for(int i=0;i<len;i++){
        str2[len-1-i]=str1[i];
    }
    printf("Given String is :%s\n\n",str1);
    printf("\nReverse string is :%s",str2);
    return 0;
}