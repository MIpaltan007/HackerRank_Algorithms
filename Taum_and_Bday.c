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
    unsigned long long int b,w,bc,wc,z,black,white,BtoW,WtoB,sum;
    int t;
    scanf("%d\n",&t);
    while(t--){
        scanf("%llu %llu\n",&b,&w);
        scanf("%llu %llu %llu",&bc,&wc,&z);
        black=b*bc;
        white=w*wc;
        BtoW=w*(bc+z);
        WtoB=b*(wc+z);
        sum=white+black;
        if(black+BtoW < sum)
        sum=black+BtoW;
        if(white+WtoB < sum)
        sum=white+WtoB;
        
        printf("%llu\n",sum);
    }
    return 0;
}
