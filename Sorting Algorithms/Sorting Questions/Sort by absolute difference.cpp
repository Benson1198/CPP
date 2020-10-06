// Given an array of numbers and a number k
// Task is to sort the array ib the order of absolute diff of each number with k
bool myComp(pair<int,int> a,pair<int,int>b){
	return (a.second < b.second);
}

void sortABS(int A[],int N, int k)
{
   pair <int,int> arr[N];
   
   for(int i=0;i<N;i++){
   	arr[i].first = A[i];
   	arr[i].second = abs(k-A[i]);

   }
   
   sort(arr,arr+N,myComp);

   for(int i=0;i<N;i++){
   	A[i] = arr[i].first;
   }

}