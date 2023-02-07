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
int i,j,n,d;
scanf("%d %d\n",&n,&d);
int a[100000];
for(i=0;i<n;i++){
    scanf("%d ",&a[i]);
}
for(i=0;i<d;i++){
    int first;
    first=a[0];
    for(j=0;j<n-1;j++){
        a[j]=a[j+1];
        
    }
    a[j]=first;
}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}
