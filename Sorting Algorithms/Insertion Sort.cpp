void insetSort(arr[],int n){
	for(int i=0;i<n;i++){
		
		int key = arr[i];
		j = i-1;

		while(j>0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}
}