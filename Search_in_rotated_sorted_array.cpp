#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum

int binary(int arr[] ,int start , int end , int element){

	while(start <= end){
		int mid = start + (end - start) / 2;

		if(arr[mid] == element){
			return mid;
		}
		else if(arr[mid] > element){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
}

int findPivot(int arr[] ,int size){

	int low = 0;
	int high = size - 1;


	while(low <= high){

		int mid = low + (high - low) / 2;


		if(arr[mid] <= arr[mid - 1] && arr[mid] <= arr[mid + 1]){
			return mid;
		}

		else if(arr[mid] >= arr[low]){
			low = mid + 1;
		}
		else {

			high = mid - 1;
		}

	}

}

int solve(int arr[] , int size , int element){

	int pivot = findPivot(arr , size);

	if(arr[pivot] == element){
		return pivot;
	}


	int a = binary(arr , 0 , pivot - 1 , element);
	int b = binary(arr , pivot , size - 1 , element);

	 if(a == -1){
	 	return b;
	 }
	 else{
	 	return a;
	 }
   
}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {3, 5, 1, 2}; 
int size = sizeof(arr) / sizeof(int);

cout << solve(arr ,size , 5);

}