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
    int n,k,time,i,t,count;
    scanf("%d\n",&t);
    while(t--){
        count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&time);
        if(time<=0){
            count++;
        }
    }   
    if(count>k){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}
return 0;
}