#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum 


int solve(int arr[4][4] , int size , int element){

	int start = 0;
	int end = size - 1;

	while(start < size && start < size - 1 < end){

		int mid  = start + (end - start )  / 2;

		if(arr[start][end] == element){
               
               return mid;
		}
		else if(arr[start][end] > element){
			end--;
		}
		else{

			start++;
		}
	}

	cout << "Not Found " << endl;
}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[4][4] = { {10 , 20 , 30 , 40}, 
                  {15 , 25 , 35 , 45},
                  {27 , 29 , 37 , 48},
                  {32 , 33 , 39 , 50} };



cout << "Test Case : " << solve(arr , 4 , 39) << endl;



}