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
    int n,k,i,j,h[100],max,diff;
    max=h[0];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&h[i]);
    }
    for(i=0;i<n;i++){
        if(h[i]>max){
            max=h[i];
        }
    }
    if(max-k>0){
        printf("%d",max-k);
    }
    else if(max-k<=0){
        printf("0");
    }
    return 0;
}
   