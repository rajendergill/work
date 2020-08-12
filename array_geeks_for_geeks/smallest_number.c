#include<stdio.h>
void smallest_number(int s,int d);
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int s,d;
        scanf("%d",&s);
        scanf("%d",&d);
        smallest_number(s,d);
        if(T!=0)
            printf("\n");
    }
}
void smallest_number(int s,int d){
    if(s==0||s>d*9){
        printf("-1");
        return;
    }
    int res[d],i;
    s=s-1;
    for(i=d-1;i>0;i--){
        if(s>9){
            res[i]=9;
            s=s-9;
        }
        else{
            res[i]=s;
            s=0;
        }
    }
    res[0]=s+1;
    for(i=0;i<d;i++)
        printf("%d",res[i]);
}




