#include<stdio.h>
int main (){
    int T,i;
     scanf("%d",&T);
      for(i=1;i<=T;i++){
      int N,j,B,key,k,count=0,sum=0; 
      scanf("%d %d",&N,&B);
      int a[N];
      for(j=0;j<N;j++)
      scanf("%d",&a[j]);
      for(k=1;k<N;k++){
          key=a[k];
          j=k-1;
          while(j>=0&&key<a[j]){
              a[j+1]=a[j];
              j=j-1;
          }
            a[j+1]=key;
            
      }
          for(j=0;j<N;j++){
              sum=sum+a[j];
              if(B<sum)
               break;
              else
               count=count+1;
          }
          printf("case #%d: %d\n",i,count);
    }
}

           

      
