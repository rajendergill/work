#include <stdio.h>
int partition(int a[],int low,int high);
int select(int a[],int k,int low,int high);
void swap(int *a,int *b){
     int temp;
    temp=*a;
     *a=*b;
    *b=temp;
 }
int main() {
    int T,i;
     scanf("%d",&T);
     for(i=0;i<T;i++){
        int n,j;
        scanf("%d",&n);
        int a[n],k;
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);
        scanf("%d",&k);
        int ans=select(a,k,0,n-1);
        printf("\n%d\n",ans);
    }
    return 0;
}
int partition(int a[],int low ,int high){
    int pivot=a[low];
    int i=low;
    for(int j=low+1;j<=high;j++){
    if(a[j]<pivot){
    i++;
    swap(&a[i],&a[j]);
    }
    }
    swap(&a[low],&a[i]);
    return(i);
    }
int select(int a[],int k,int low,int high){
    if(low==high)
    return (a[low]);
    int r=partition(a,low,high);
    if(k-1==r-low)
    return (a[r]);
    if(k-1<r-low)
    return select(a,k,low,r-1);
    if(k-1>r-low)
    return select(a,k-r,r+1,high);
    
}
