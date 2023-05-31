#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum

// if the array is sorted

int solve(int arr[] , int size , int element){

	int start = 0;
	int end = size - 1;

    // Ittrate Over End
	while(start < end){
        
        // // Find Middle Of the Array
		// int mid = (start + end ) / 2;

        // For Prevent OverFlow we find mid element like this
        int mid = start - start + end / 2;
 
        // case 1:       
		if(arr[mid] == element) return mid;
 
        // case 2:  
		else if(arr[mid] > element) end = mid - 1;

        // case 3:  
		else start = mid + 1;
	}
}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {1 , 2 , 3 , 4 , 5 , 4 , 5 , 98};
int size = sizeof(arr) / sizeof(int);


cout << solve(arr , size , 98);





}