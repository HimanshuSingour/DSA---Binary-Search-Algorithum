#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum (Nearly Shorted Array)
// ith -> i + 1 , i , i - 1

int solve(int arr[] ,int size , int key){

	int low = 0;
	int high = size - 1;

	while(low <= high){

		int mid = low + (high - low) / 2;
        
        // compare mid with i , i + 1 , i - 1
		if(arr[mid] == key ){
			return mid;
		}  
        
        
		if(mid >= low && arr[mid - 1] == key ){
			return (mid - 1);
		}

		if(mid <= high && arr[mid + 1] == key ){
			return (mid + 1);
		}

       // Moving 2 steps Forward or BackWord
		else if(arr[mid] >= key){
			high = mid - 2;
		}

		else{
			low = mid + 2;
		}
	}

	return -1;
}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {10, 3, 40, 20, 50, 80, 70 }; 
int size = sizeof(arr) / sizeof(int);

cout << solve(arr ,size , 80  );

}