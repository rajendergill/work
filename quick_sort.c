#include <stdio.h>
 void quick_sort(int a[],int low,int high);
 void swap(int *a,int *b){
     int temp;
    temp=*a;
     *a=*b;
    *b=temp;
 }
     int partition(int a[],int low ,int high);
int main (){
      int n,k;
      scanf("%d\n",&n);
      int a[n];
      for(k=0;k<n;k++)
      scanf("%d",&a[k]);
      quick_sort(a,0,n-1);
      for(k=0;k<n;k++) 
      printf("%d\n",a[k]);
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

        

