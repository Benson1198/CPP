void rightRotateByOne(long long *arr,int begin,int end){
    long long temp = arr[end];
    int n = end - begin +1;
    for (int i = begin; i <= end; i++) 
        arr[i+1] = arr[i];
        
    arr[begin] = temp;
    
    long long temp = arr[end], i;
    for (i = end; i > begin; i--)
        arr[i] = arr[i - 1];
    arr[end] = temp;
}

void rearrange(long long *arr, int n) 
{ 
	for(int i = 0;i<n;i+=2){
 	    rightRotateByOne(arr,i,n-1);
 	}
}	