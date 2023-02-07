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
    int n,i,t,m=5,sum=0;
   scanf("%d\n",&n);
   for(i=0;i<n;i++){
       t=m/2;
       m=t*3;
       sum+=t;
   }
   printf("%d",sum);
    return 0;
}
