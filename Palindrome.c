#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char str[10]="KAAK";
    
    int len=strlen(str);
    int left=0,rigth=len-1,flag=1;
    while(left<rigth){
            if(str[left]==str[rigth]){
                flag=1;
            }
            else{
               flag=0;
            }
            left++;
            rigth--;
    }
    if(flag==1){
        printf("Yes palindrome\n");
    }
    else{
      printf("Not palindrome\n");  
    }
    return 0;
    
}