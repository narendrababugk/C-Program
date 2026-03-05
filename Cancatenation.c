#include<stdio.h>

int main(){
    int i=0;
    int j=0;
    int k=0;
    char str1[100],str2[100],str3[100];

    printf("Enter the First string:");
    scanf("%s",str1);
    printf("Enter the Second string:");
    scanf("%s",str2);
     
    while(str1[i]!='\0'){
     
     str3[j]=str1[i];
     i++;
     j++;
    }
    i=0;
    while(str2[i]!='\0'){
     str3[j]=str2[i];
     i++;
     j++;
    }
    
   printf("\n First string is :%s\n",str1);
   printf(" Second string is :%s\n",str2);
   printf(" Concatenation string is :%s",str3);
    return 0;

}
