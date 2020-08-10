#include<stdio.h>
void quick_sort(int a[],int low,int high);
int partition(int a[],int low ,int high);   
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a[n],b[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        quick_sort(a,0,n-1);
        quick_sort(b,0,n-1);
           long long int sum=0;
        for(i=0;i<n;i++){
            sum=sum+a[i]*b[n-1-i];
        }
        printf("%lld",sum);
        if(T!=0)
            printf("\n");
    }
}
void quick_sort(int a[],int low,int high){
    if(low<high){
      int pi =partition(a,low,high);  
      quick_sort(a,low,pi-1);
      quick_sort(a,pi+1,high);
    }
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

        


