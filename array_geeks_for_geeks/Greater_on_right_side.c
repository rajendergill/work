#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a[n],i,j,max;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++){
            j=i+1;
            max=a[j];
            while(j<n){
                if(a[j]>max)
                    max=a[j];
                j++;
            }
            a[i]=max;
        }
        a[n-1]=-1;
        for(i=0;i<n;i++){
            printf("%d",a[i]);
            if(i!=n-1)
                printf(" ");
        }
         if(T!=0)
            printf("\n");
    }
}    
