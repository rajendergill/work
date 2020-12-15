#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int result = gcd(a,b);
    printf("%d",result);
}
int gcd(int a,int b){
    if(a>b){
        if(a%b==0)
            return b;
        else{
            for(int i=b;i>=1;i--){
                if(a%i==0&&b%i==0)
                    return i;
            }
        }
    }
    else{
        if(b%a==0)
            return a;
        else{
            for(int j=a;j>=1;j--){
                if(b%j==0&&a%j==0)
                    return j;
            }
        }
    }
}

