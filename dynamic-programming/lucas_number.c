#include <stdio.h>
long long int lucas(int n);
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        //lucas(n);
        printf("%lld",lucas(n));
        if(T!=0)
            printf("\n");
    }
	//code
	return 0;
}
long long int lucas(int n){
    long long int L[n];
    L[0]=2;
    for(int i=1;i<=n;i++){
        if(i==1)
            L[i]=1;
        else
            L[i]=(L[i-1]+L[i-2])%1000000007;
    }
    return L[n];
}
