#include<stdio.h>
void swap(int *a,int *b);//funtion for swapping two elements
void reverse(int n,int a[]);
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int a[n];
        int i;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        reverse(n,a);
    }
}
void reverse(int n,int a[]){
    int j;
    for(j=0;j<n/2;j++){
        swap(&a[j],&a[n-j-1]);
    }
    for(j=0;j<n;j++){
        printf("%d",a[j]);
        if(j!=n-1)
            printf(" ");
            else
                printf("\n");
    }
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


