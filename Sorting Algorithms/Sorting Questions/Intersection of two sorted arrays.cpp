void intersection(int a[],int b[],int n,int m){
	int i = 0,j=0;

	while(i<n && j<m){
		if(i>0 && a[i-1] == a[i]){
			i++;
			continue;
		}
		else if(a[i] < b[j]){
			i++;
		}
		else if(a[i] > b[j]){
			j++;
		}
		else{
			cout << a[i] << " ";
			i++;
			j++;
		}
	}
}