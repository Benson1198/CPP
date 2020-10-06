// Program to merge two sorted arrays
// Program to merge two sorted arrays
vector<int> merge(int a[],int b[],int m, int n){
	vector<int> c;
	int i = 0,j = 0;
	while(i<m && j<n){
		if(a[i] < b[j]){
			c.push_back(a[i]);
			i++;
		}
		else{
			c.push_back(b[j]);
			j++;
		}
	}
	
	while(i<m){
		c.push_back(a[i]);
	    i++;
	}
	while(j<n){
		c.push_back(b[j]);
		j++;
	}
	
	return c;
}

// OR

// void merge(int a[],int b[],int m, int n){
// 	int i = 0,j = 0;
// 	while(i<m && j<n){
// 		if(a[i] < b[j]){
// 			cout << a[i++] << " ";
// 		}
// 		else{
// 			cout << b[j++] << " ";
// 		}
// 	}
	
// 	while(i<m){
// 		cout << a[i++] << " ";
// 	}
// 	while(j<n){
// 		cout << b[j++] << " ";
// 	}
// }


// The main Merge Sort recursive Algorithm
void mergeSort(int arr[],int l,int r){
	if(l<r){
		int m= l+ (r-l)/2;

		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

// The merging algorithm for merge sort

void merge(int arr[], int l,int m,int r){
	int n1 = m-l+1, n2 = r-m;

	int left[n1], right[n2];

	for(int i=0;i<n1;i++){
		left[i] = arr[i]
	}

	for(int j=0;j<n2;j++){
		right[j] = arr[m+1+j];
	}

	int i=0,j=0,k=0;

	while(i<n1 && j<n2){
		if(left[i] <= right[j]){
			arr[k++] = left[i++];
		}
		else{
			arr[k++] = right[j++];
		}
	}

	while(i<n1){
		arr[k++] = left[i++];
		k++;
	}
	while(j<n2){
		arr[k++] = right[j++];
		k++;
	}
}
