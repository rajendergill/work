#include<stdio.h>
void fib_no(int n);
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        
        int e;
        scanf("%d",&e);
        fib_no(e);
  
        if (T != 0){
            printf("\n");
        }
        
    }
}    

void fib_no(int n){
    unsigned long long  int fib[n]; //for array can take big integers
    int i;
    long long int sum=0;
    for(i=1;i<=n;i++){
        if(i==1||i==2)
            fib[i]=1;
        else
            fib[i]=fib[i-1]+fib[i-2];
    }
    for(int j=1;j<=n;j++){
             if(fib[j]%2==0 && fib[j]<=n)
            sum=sum+fib[j];
    }
        printf("%lld",sum);
        
    
}          
