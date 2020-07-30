#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        long long int a[n],sum=0,max=0;
        int i,j;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<n-1;i++){
             j=i+1;
             sum=a[i]+a[j];
             if(sum>max){
                max=sum;
                sum=0;
             }
        }
        printf("%lld",max);
        if(T!=0)
            printf("\n");
    }
	//code
	return 0;
}
