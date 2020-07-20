#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        int n,i,j;
        scanf("%d",&n);
        int a[n+1];
        int k;
        scanf("%d",&k);
        int K[k];
        for(i=0;i<=n;i++)
            a[i]=0;
        for(j=0;j<k;j++)
        scanf("%d",&K[j]);
        for(j=0;j<k;j++){
            for(i=1;i<=n;i++){
                if(i>=K[j])
                a[i]=a[i]+1;
            }
        }
        for(i=1;i<=n;i++){
            printf("%d",a[i]);
            if(i!=n)
                printf(" ");
            }
        if(T!=0)
        printf("\n");
    }
	//code
	return 0;
}
