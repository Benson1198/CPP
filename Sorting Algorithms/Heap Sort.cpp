void heapSort(int arr[], int n){
	buildHeap(arr,n);
	for(int i =n-1, i>=1, i--){
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}
}