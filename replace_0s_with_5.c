#include<stdio.h>
#include<math.h>
int convert0to5(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",convert0to5(n));
}
int convert0to5(int n)
{
//Your code here
int i=0,result=0,x=n;
  while(x/10!=0){
  i++;
  x=x/10;
   }
   for(int j=0;j<=i;j++){
   if(n%10==0){
       result=result+pow(10,j)*5;
       n=n/10;
   }
   else{
       result=result+pow(10,j)*(n%10);
       n=n/10;
  }
   }
   return result;
}
