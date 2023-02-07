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
    int n,a[100],i,j,count,res=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>res)
        res=count;
    }
    printf("%d",n-res-1);
    return 0;
}
