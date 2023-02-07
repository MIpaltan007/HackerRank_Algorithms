#include<stdio.h>
#include<math.h>
int main(){
    int t,a,b,x;
    scanf("%d\n",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&x);
        if(a!=b){
        if((a+x)==(b-x)){
             a=a+x;
             b=b-x;
        }
        else if((a-x)==(b+x)){
              a=a-x;
              b=b+x;
        }
        if(a==b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else if(a==b){
        printf("YES\n");
    }
    }
    return 0;
}