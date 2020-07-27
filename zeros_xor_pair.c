#include <stdio.h>
int main (){
       int N,count=0,k,j;
	scanf("%d",&N);
	int a[N];
	for(j=0;j<N;j++)
	scanf("%d",a[j]);
	for(j=0;j<N-1;j++){
	for(k=j+1;k<N;k++){
	if(a[j]==a[k])
	count++;
	}
	
	}
	printf("%d",count);
}
    
