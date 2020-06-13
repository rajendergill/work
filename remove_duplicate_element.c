#include<stdio.h>
int remove_duplicate(int A[],int N);
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int N=remove_duplicate(a,n);
    for(i=0;i<N;i++)
    printf("%d ",a[i]);
}
int remove_duplicate(int A[], int N) 
{ 
    if (N==0 || N==1) 
        return N; 
  
    // To store index of next unique element 
    int j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (int i=0; i < N-1; i++) {
        if (A[i] != A[i+1]) 
            A[j++] = A[i]; 
    }
  
    A[j++] = A[N-1]; 
  
    return j; 
} 
