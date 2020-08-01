#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a[n+1],ipa[n+1],i;
        for(i=1;i<n+1;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n+1;i++){
            ipa[a[i]]=i;
        }
        for(i=1;i<n+1;i++){
            printf("%d",ipa[i]);
                if(i!=n)
                    printf(" ");
        }
        if(T!=0)
            printf("\n");
    }
}
