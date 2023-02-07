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
    int q,i,j,count=0;
    char s[100000];
    scanf("%d\n",&q);
    while(q--){
        scanf("%s",s);
        for(i=0;i<strlen(s);i++){
                if(s[i]==s[i+1]){
                count++;
                }
        }
        printf("%d\n",count);
        count=0;
        }
        return 0;
    }
