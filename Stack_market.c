#include <stdio.h>
#include<string.h>
void main() {
    
    int stack[]={4,7,2,9,13,8,9};

    int i=0;

    int len=0;
    
    int max_profit=0,profit=0;

    int buy,sell;
    
    while(stack[i]!='\0'){
        i++;
        len++;
    }

    printf("Length:%d",len);

    for(buy=0 ; buy < len ; buy++){

        for(sell= buy+1 ; sell < len ; sell++){

            profit=stack[sell]-stack[buy];

            if(profit > max_profit){
                max_profit=profit;
            }

            printf("Buy %d\n",stack[buy]);
            printf("Sell %d\n",stack[sell]);
            printf("Profit %d\n\n",profit);
        }
    }
    printf("Final Maximum Profit = %d", max_profit);
}