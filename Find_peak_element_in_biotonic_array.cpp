#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum 
// Peak Element of an array
// the element called peak element which is greateer than mid - 1 and mid + 1 elemets
// Find Peak Element In Biotonic Array
// the biotonic Array Is Stickly Increasing and after a peaking point stickly Decreasing

int solve(int arr[], int size){

	int start = 0;
	int end = size - 1;

	while(start <= end){
        

        // finding mid of the Array
		int mid = start + (end - start) / 2;

        
        // Check for Nabouring of mid that both are smaller than mid
		if(arr[mid] > arr[mid - 1] &&  arr[mid] > arr[mid + 1]){
			return arr[mid];
		}

		else if(arr[mid - 1] > arr[mid]){
			end = mid - 1;
		}

		else{
			start = mid + 1;
		}
    }
}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = { 1, 3, 50, 10, 9, 7, 6 };
int size = sizeof(arr) / sizeof(int);

cout << "Test Case : " << solve(arr ,size) << endl;



}