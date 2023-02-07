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
    int t,i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        unsigned long long n,n1;
        int c=0,term;
        scanf("%llu",&n);
        n1=n;
        while(n1>0){
            term=n1%10;
            if(term!=0 && n%term==0)
            c++;
            n1/=10;
        } 
        printf("%d\n",c);
    }
    return 0;
}
