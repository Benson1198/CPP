// Types of questions:

// -Sorting an arrya of 0s,1s and 2s.

// -Three way partitioning where multiple occurances of a pivot may exist
// (All the elemnts equal to pivot must be together).

// -Three way Partitioning aroung a range.




// In this Particular code example we are sortiung an array of of 0s,1s and 2s.
#include<bits/stdc++.h>

using namespace std;

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void seperateThree(int arr[],int n){
	int low=0, mid=0, high=n-1;

	while(mid<=high){
		switch(arr[mid]){
			case 0: 
                swap(arr[mid],arr[low]);
				mid++; low++;
				break;
			
			case 1:	
                mid++;
				break;
			
			case 2: 
                swap(arr[mid],arr[high]);
				high--;
				break;
		}
	}
}

int main(){
	int n = 17;
	// cin >> n;
	int arr[n] = {2,1,2,0,1,0,2,1,1,0,0,0,1,1,2,2,2};

	seperateThree(arr,n);

	for(int j=0;j<n;j++){
		cout << arr[j] <<" ";
	}
}