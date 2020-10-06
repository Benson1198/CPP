#include<bits/stdc++.h>

using namespace std;

struct Interval{
	int st,end;
}


// myComp funtion
// This function compares the pairs on the basis of first element.
bool myComp(Interval i1, Interval i2) 
{ 
    return (i1.st < i2.st); 
} 


void mergeIntervals(Interval arr[], int n){
	sort(arr,arr+n,myComp);

	int res = 0;

	for(int i=1;i<n;i++){
		if(arr[res].end >= arr[i].st){
			arr[res].end = max(arr[i].end,arr[res].end);
			arr[res].st = min(arr[i].st,arr[res].st);
		}
		else{
			res++; arr[res] = arr[i];
		}
	}
	for(int i=0;i<res;i++){
		cout << arr[i].st << " " << arr[i].end << endl;
	}
}





int main(){
	
}