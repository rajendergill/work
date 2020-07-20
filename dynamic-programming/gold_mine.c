//; C++ program to solve Gold Mine problem 
#include<stdio.h> 

const int MAX = 100;
int max(int a,int b){
    if(a>b)
        return a;
    else 
        return b;
}

// Returns maximum amount of gold that can be collected 
// when journey started from first column and moves 
// allowed are right, right-up and right-down 
int getMaxGold(int m, int n,int gold[m][n]) 
{ 
	// Create a table for storing intermediate results 
	// and initialize all cells to 0. The first row of 
	// goldMineTable gives the maximum gold that the miner 
	// can collect when starts that row 
	int goldTable[m][n],right,right_up,right_down; 

	for (int col=n-1;col>=0; col--) 
	{ 
		for (int row=0; row<m; row++) 
		{ 
            if(col==n-1)
            right=0;
            else     
		    right =goldTable[row][col+1];       	// Gold collected on going to the cell on the right(->)  
			// Gold collected on going to the cell to right up (/)
            if(row==0||col==n-1)
                 right_up = 0;
            else
             right_up=goldTable[row-1][col+1];
			// Gold collected on going to the cell to right down (\) 
            if(row==m-1||col==n-1)
            right_down = 0;
            else
              right_down=goldTable[row+1][col+1];
			// Max gold collected from taking either of the 
			// above 3 paths 
			goldTable[row][col] =gold[row][col] + max(right, max(right_up, right_down)); 
													
		} 
	} 

	// The max amount of gold collected will be the max 
	// value in first column of all rows 
	int res = goldTable[0][0]; 
	for (int i=1; i<m; i++) 
		res = max(res, goldTable[i][0]); 
	return res; 
} 

// Driver Code 
int main()
{   int T;
    scanf("%d",&T);
    while(T--){ 
        //printf("%s","check"); 
	    //printf("%d",T); 
        int m , n ,i,j;
        scanf("%d %d",&m,&n);
	    //printf("%d\n",m); 
	    //printf("%d\n",n); 
	    int gold[m][n];
        for (i = 0; i < m; i++) { 
            for (j = 0; j < n; j++) { 
	            //printf("%d\n",i); 
	            //printf("%d\n",j); 
                scanf("%d",&gold[i][j]);
            }
        }
	    printf("%d",getMaxGold(m, n,gold)); 
    }
} 

