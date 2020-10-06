#include <iostream>

using namespace std;

void unionArrays(int a[],int b[],int n,int m){
	int i = 0,j=0;

	while(i <n && j< m){
		if(i>0 && a[i-1] == a[i]){
			i++;
			continue;
		}
		if(j >0 && b[j-1] == b[j]){
			j++;
			continue;
		}

		if(a[i] > b[j]){
			cout << b[j] << " ";
			j++;
		}

		else if(a[i] < b[j]){
			cout << a[i] << " ";
			i++;
		}

		else{
		    cout << a[i] << " ";
			i++; 
            j++;
		}
	}
	
	while(i<n){
	    if(i==0 || a[i-1] != a[i]){
            cout << a[i] << " ";
	        i++;
	    }
        else{
            i++;
        }
	}
	
	while(j<m){
	    if(j==0 || b[j-1] != b[j]){
            cout << b[j] << " ";
	        j++;
	    }
        else{
            j++;
        }
	}
}

int main()
{
    int a[] = {3,8,8,9,10};
    int b[] = {2,8,9,10,10,15};
    
    unionArrays(a,b,5,6);
}