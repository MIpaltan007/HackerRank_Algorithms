#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int i,b,n,m,j,ans=-1;
    scanf("%d %d %d\n",&b,&n,&m);
    int keyboard[1005],drives[10005];
    for(i=0;i<n;i++){
        scanf("%d ",&keyboard[i]);
    }
    for(i=0;i<m;i++){
        scanf("\n%d ",&drives[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(keyboard[i]+drives[j]<=b)
            ans=max(keyboard[i]+drives[j],ans);
        }
    }
    printf("%d",ans);
    
    return 0;
}
