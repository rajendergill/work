#include<stdio.h>
int longest_subarray(int n,int a[]);
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("%d",longest_subarray(n,a));
        if(T!=0)
            printf("\n");
    }
}
int longest_subarray(int n,int a[]){
    int j,max=0,count=0;
    for(j=0;j<n;j++){
        if(a[j]<0){
            if(max<=count){
                max=count;
                count=0;
            }
        }
        if(a[j]>=0)
            count++;
    }
    if(max>count)
        return max;
    else
        return count;
}

            


