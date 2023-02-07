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
    int a[10],b[10],n,m,i,count=0,k;
    scanf("%d %d\n",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d ",&b[i]);
    }
    for(k=1;k<=100;k++){
        int flag=1;
        for(i=0;i<n;i++){
            if(k%a[i]!=0)
            flag=0;
        }
        for(i=0;i<m;i++){
            if(b[i]%k!=0)
            flag=0;
        }
        if(flag==1)
        count++;
    }
    printf("%d",count);
    return 0;
}
