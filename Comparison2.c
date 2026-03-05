#include<stdio.h>
void main(){
    char str1[100];
    char str2[100];

    printf("Enter the first String:");
    scanf("%s",str1);

    printf("\nEnter the second String:");
    scanf("%s",str2);

    int flag=1;
    for(int i=0;str1[i]!='\0';i++){
      for(int i=0;str2[i]!='\0';i++){  
        i++;
        if(str1[i]==str2[i]){
           flag=1;

        }
        else{
           flag=0;   
        }
          
      }
    }
    if(flag==1){
        printf("True");
    }
    else{
        printf("False");
    }
}
