#include<stdio.h>
#include<stdlib.h>
void quick_sort(int a[],int low,int high);
int partition(int a[],int low ,int high);    
int min(int a,int b){
    if(a<b)
    return a;
    else 
        return b;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int getMinDiff(int a[], int n, int k); 
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int k,i;
        scanf("%d",&k);
        int n;
        scanf("%d",&n);
        int *a=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        quick_sort(a,0,n-1);
        printf("%d",getMinDiff(a,n,k));
        if(T!=0)
            printf("\n");
    }
}
int getMinDiff(int a[], int n, int k) 
{ 
    if (n == 1) 
       return 0; 
  
  
    int ans = a[n-1] - a[0]; 
  
    // Handle corner elements 
    int small = a[0] + k; 
    int big = a[n-1] - k; 
    if (small > big) 
       swap(&small,&big); 
  
    // Traverse middle elements 
    for (int i = 1; i < n-1; i ++) 
    { 
        int subtract = a[i] - k; 
        int add = a[i] + k;  
        if (subtract >= small || add <= big) 
            continue; 

        if (big - subtract <= add - small) 
            small = subtract; 
        else
            big = add; 
    } 
  
    return  min(ans, big - small); 
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

        

