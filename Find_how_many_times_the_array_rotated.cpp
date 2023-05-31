#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum

// Find The Pivot
// find the minimum elemnt 
// find how many times are array roated


int solve(int arr[] ,int size){

	int low = 0;
	int high = size - 1;

	while(low <= high){

		int mid = low + (high - low) / 2;

        // this is for overflows
		int next = (mid + 1) % size;
		int prev = (mid - 1 + size) % size;

        // if both the noboring element are smaller than the mid than this elemnt is minimum
		if(arr[mid] <= arr[prev] && arr[mid] <= arr[next]){

			return mid;
		}


		// For Movement

		// if it is not then we have to search on unsorted array

		else if(arr[mid] <= arr[high]){

			high = mid - 1;

		}
		else if(arr[low] <= arr[mid]){

              low = mid + 1;
		}

		

	}

}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = { 15, 18, 2, 3, 6, 12}; 
int size = sizeof(arr) / sizeof(int);

 cout << solve(arr ,size);

}