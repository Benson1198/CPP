// Partition function for Quick Sort

// Lomuto Partition method

int lPartition(int arr[],int l, int h){
	int pivot = arr[h];
	int i = l-1;

	for(int j = l; j<h ;j++){
		if(arr[j] < pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1],arr[h]);
	return 1+i;
}


// Hoare's Partition Method (much better than Lomuto Partition)

int hPartition(int arr[],int l, int h){
	int pivot = arr[l];
	int i = l-1, j= h+1;

	while(true){
		do{
			i++;
		}while(arr[i] < pivot)

		do{
			j--;
		}while(arr[j] > pivot)

		if(i>=j){
			return j;
		}
		swap(arr[i],arr[j]);
	}
}



// Quick Sort using Lomuto Partition
void qSort1(int arr[],int l,int h){
	if(l<h){
		int p = lPartition(arr,l,h);
		qSort1(arr,l,p-1);
		qSort1(arr,p+1,h);
	}
}



// Quick Sort using Hoare's Partition
void qSort2(int arr[],int l,int h){
	if(l<h){
		int p = hPartition(arr,l,h);
		qSort2(arr,l,p);
		qSort2(arr,p+1,h);
	}
}