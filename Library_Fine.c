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
    int d1,d2,m1,m2,y1,y2;
    scanf("%d %d %d\n",&d1,&m1,&y1);
    scanf("%d %d %d\n",&d2,&m2,&y2);
    if(y1<y2){
        printf("0");
    }
    else if(y1==y2 && m1<m2){
        printf("0");
    }
    else if(m1<=m2 && y1<=y2 && d1<=d2){
        printf("0");
    }
    else if(m1==m2 && y1==y2 && d1==d2){
        printf("0");
    }
    else if(d1!=d2 && y1==y2 && m1==m2){
        printf("%d",(d1-d2)*15);
    }
    else if(y1==y2 && m1!=m2){
        printf("%d",(m1-m2)*500);
    }
    else if(y1!=y2){
        printf("%d",10000*(y1-y2));
    }
    return 0;
}