#include <stdio.h> 
#include <stdlib.h>
int randompartition(int arr[], int l, int r);

int partition(int arr[], int l, int r); 

// This function returns k'th smallest element in arr[l..r] using 
// QuickSort based method. ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT 
int kthSmallest(int arr[], int l, int r, int k) 
{ 
	// If k is smaller than number of elements in array 
	if (k > 0 && k <= r - l + 1) { 
		// Partition the array around last element and get 
		// position of pivot element in sorted array 
		int pos = randompartition(arr, l, r); 

		// If position is same as k 
		if (pos - l == k - 1) 
			return arr[pos]; 
		if (pos - l > k - 1) // If position is more, recur for left subarray 
			return kthSmallest(arr, l, pos - 1, k); 

		// Else recur for right subarray 
		return kthSmallest(arr, pos + 1, r, k - pos + l - 1); 
	} 

	// If k is more than number of elements in array 
} 

void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

// Standard partition process of QuickSort(). It considers the last 
// element as pivot and moves all smaller element to left of it 
// and greater elements to right 
int partition(int arr[], int l, int r) 
{ 
	int x = arr[r], i = l; 
	for (int j = l; j <= r - 1; j++) { 
		if (arr[j] <= x) { 
			swap(&arr[i], &arr[j]); 
			i++; 
		} 
	} 
	swap(&arr[i], &arr[r]); 
	return i; 
} 

// Driver program to test above methods 
int main(){
    
    int T,i;
     scanf("%d",&T);
     while(T--){
        int n,j;
        scanf("%d",&n);
        int a[n],k;
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);
        scanf("%d",&k);
        int ans=kthSmallest(a,0,n-1,k);
        printf("%d",ans);
        if(T!=0)
            printf("\n");
    }
    return 0;
}
int randompartition(int arr[], int l, int r) 
{ 
    int n = r-l+1; 
    int pivot = rand() % n; 
    swap(&arr[l + pivot], &arr[r]); 
    return partition(arr, l, r); 
} 


