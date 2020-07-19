/* Dynamic Programming C implementation of LCS problem */
#include<stdlib.h>
#include<stdio.h> 
#include<string.h> 
int max(int a, int b); 

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n ) 
{ 
   int L[m+1][n+1]; 
   int i, j; 

/* Following steps build L[m+1][n+1] in bottom up fashion. Note 
	that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
for (i=0; i<=m; i++) 
{ 
	for (j=0; j<=n; j++) 
	{ 
	if (i == 0 || j == 0) 
		L[i][j] = 0; 

	else if (X[i-1] == Y[j-1]) 
		L[i][j] = L[i-1][j-1] + 1; 

	else
		L[i][j] = max(L[i-1][j], L[i][j-1]); 
	} 
} 
	
/* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
return L[m][n]; 
} 

/* Utility function to get max of 2 integers */
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 

/* Driver program to test above function */
int main()
{
   int T;
  scanf("%d",&T);
 while(T--){
       int m,n;
    scanf("%d",&m);
    scanf("%d",&n);


    char *X = NULL;
    int numberOfChars = m; // you can use as many as you need
    X = (char*)malloc((m+1)*sizeof(char));

    char *Y = NULL;
    int number = n; // you can use as many as you need
    Y = (char*)malloc((n+1)*sizeof(char));
     scanf("%s",X);
    scanf("%s",Y);
    printf("%d",lcs( X, Y, m, n )); 
  //  if(T!=0)
    //    printf("\n");
    }
return 0;
}
