#include<stdio.h>
#include<stdlib.h>
int distinct_elements(int n,int a[]);
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a[n],i,j,max;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("%d",distinct_elements(n,a));
        if(T!=0)
            printf("\n");
    }
}
int distinct_elements(int n,int a[]){
    int i,j,count=0;
    for(i=0;i<n-1;i++){
        j=i+1;
        while(j<n){
            if(abs(a[i])==abs(a[j]))
                break;
            else 
                if((abs(a[i])!=abs(a[j]))&&(j==n-1)){
                    count++;
                    j++;
                }
                else
                    j++;
        }
    }
    count++;
    return count;
}

