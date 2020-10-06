// Sort (Segregate) the array with two types of elements

// Here the type of elements may be:
// -Even odd.
// -Positive negative.
// -Binary array(0 and 1).

#include<bits/stdc++.h>

using namespace std;

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void seperateTwo(int arr[],int n){
	int i= -1,j=n;

	while(true){
		do{
			i++;
		}while(arr[i]<0);

		do{
			j--;
		}while(arr[j] >=0);

		if(i>=j){
			return;
		}

		swap(arr[i],arr[j]);
	}
}

int main(){
	int n = 2;
	// cin >> n;
	int arr[n] = {15,-4};

	seperateTwo(arr,n);

	for(int j=0;j<n;j++){
		cout << arr[j] <<" ";
	}
}