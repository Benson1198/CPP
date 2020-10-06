// Naive approach

void countSort1(int arr[],int n,int k){
	int count[k];
	for (int i = 0; i <k; i++)
	{
		count[i] = 0;	
	}
	
	for (int i = 0; i < n; i++)
	{
		count[arr[i]] ++;	
	}

	int index = 0;
	for(int i=0;i<k;i++){
		for(int j=0;j<count[i];j++){
			arr[index] = i;
			index ++;
		}
	}
}


// General purpose Counting Sort approach

void countSort2(int arr[],int n,int k){
	int count[k];
	for (int i = 0; i <k; i++)
	{
		count[i] = 0;	
	}
	
	for (int i = 0; i < n; i++)
	{
		count[arr[i]] ++;	
	}

	for(int i=1;i<k;i++){
		count[i] = count[i-1] + count[i];
	}

	int output[n];
	for(int i=n-1;i>=0;i--){
		output[count[arr[i]]-1] = arr[i];
		count[arr[i]] --;
	}

	for(int i=0;i<n;i++){
		arr[i] = output[i];
	}
}