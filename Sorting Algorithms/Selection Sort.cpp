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

	for(int i=0;i<n;i++){
		int min_ind = i;
		for(int j=i+1;j<n;j++){
			if(arr[j] < arr[min_ind]){
				min_ind = j;
			}
		}
		swap(arr[min_ind],arr[i]);
	}

	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}

}