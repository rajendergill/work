#include<stdio.h>
void swap(int *a,int *b);//funtion for swapping two elements
void reverse(int n,int k,int a[]);
int min(int a,int b);
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a[n];
        int k;
        scanf("%d",&k);
        int i;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        reverse(n,k,a);
    }
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(int n,int k,int a[]){
    int j;
    for(j=0;j<n;j+=k){
        int left=j;
        int right=min(j+k-1,n-1);
        while(left<right){
            swap(&a[left++],&a[right--]);
                    }
            }
         for(j=0;j<n;j++){
        printf("%d",a[j]);
        if(j!=n-1)
            printf(" ");
            else
                printf("\n");
    }
}
int min(int a,int b){
    if(a>b)
        return b;
        else 
            return a;
            }
       
                    
                    
            
                    


