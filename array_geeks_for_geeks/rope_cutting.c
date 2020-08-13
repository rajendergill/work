#include<stdio.h>
void quick_sort(int a[],int low,int high);
void swap(int *a,int *b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
 }
int partition(int a[],int low ,int high);
void cuttringRopes(int Ropes[], int n) 
{ 
    // sort all Ropes in increase  
    // of there length 
  
    quick_sort(Ropes,0,n-1);
    int singleOperation = 0; 
  
    // min length rope 
    int cuttingLenght = Ropes[0]; 
  
    // now traverse through the given 
    // Ropes in increase order of length 
    for (int i = 1; i < n; i++) 
    { 
        // After cutting if current rope length 
        // is greater than '0' that mean all 
        // ropes to it's right side are also  
        // greater than 0 
        if (Ropes[i] - cuttingLenght > 0) 
        { 
            // print number of ropes remains 
             printf("%d ",n-i); 
            // now current rope become 
            // min length rope 
            cuttingLenght = Ropes[i]; 
            singleOperation++; 
        } 
    } 
    if (singleOperation == 0)
       printf("0"); 
}

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int Ropes[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&Ropes[i]);
         cuttringRopes(Ropes,n);
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

        
 

