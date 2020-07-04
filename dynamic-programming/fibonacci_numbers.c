#include<stdio.h>
void fib_no(int n);
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int e;
        scanf("%d",&e);
        fib_no(e);  
    }
}    

void fib_no(int n){
     long long  int fib[n]; //for array can take big integers
    int i;
    for(i=1;i<=n;i++){
        if(i==1||i==2)
            fib[i]=1;
        else 
            fib[i]=fib[i-1]+fib[i-2];
    }
    for(i=1;i<=n;i++){
        printf("%lld ",fib[i]);
        
    }
}        
