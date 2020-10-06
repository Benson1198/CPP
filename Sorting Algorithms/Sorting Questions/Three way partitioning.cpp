void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

vector<int> threeWayPartition(vector<int> A, int a, int b)
{	
    int n = A.size();

    int start = 0, end = n-1; 
  

    for (int i=0; i<=end;) 
    { 
 
        if (A[i] < a) 
            swap(A[i++], A[start++]); 
  

        else if (A[i] > b) 
            swap(A[i], A[end--]); 
  
        else
            i++; 
    }
	return A;
}