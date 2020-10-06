#include<bits/stdc++.h>

using namespace std;

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{	int n = 7;
	int arr[] = {2,5,8,1,4,9,3};

	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}

	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}

}