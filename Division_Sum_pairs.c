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
    int i,j,n,k,a[100],pair=0;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if( (a[i]+a[j])%k==0){
                pair++;
            }
        }
    }
    printf("%d",pair);
    return 0;
}