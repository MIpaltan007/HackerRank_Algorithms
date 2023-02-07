#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,j,k,rem=0,sum,count=0,x;
    scanf("%d %d %d",&i,&j,&k);
    for(i;i<=j;i++){
        x=i;
        sum=0;
        while(x!=0){
            rem=x%10;
            sum=(sum*10)+rem;
            x=x/10;
        }
        if(abs(i-sum)%k==0)
        count++;
    }
    printf("%d",count);
    return 0;
}