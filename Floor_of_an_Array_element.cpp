#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum 
// floor -> Greates element Which is smaller tha x;

int solve(int arr[] ,int size , int key){

	int low = 0;
	int high = size - 1;
	int ans = INT_MIN;

	while(low <= high){

		int mid = low + (high - low) / 2;
        
        // compare mid with i , i + 1 , i - 1
		if(arr[mid] == key ){
		    return mid;

		    if(arr[mid] > ans){
		    	ans = arr[mid];
		    	return ans;
		    }
		    
		}
		else if(arr[mid] >= key){

			high = mid - 1;
		}
		else{
            
            // ans = arr[mid]; Here Also
			low = mid + 1;
		}
       
	}

}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {1, 2, 3 , 4 , 8 , 10 , 10 , 12 , 19}; 
int size = sizeof(arr) / sizeof(int);

cout << "Test Case : " << solve(arr ,size , 6) << endl;
cout << "Test Case : " << solve(arr ,size , 5) << endl;
cout << "Test Case : " << solve(arr ,size , 55) << endl;

}