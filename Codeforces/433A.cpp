#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int a = 0,b = 0;

    int i=n-1;
    
    while(i != -1){
        if(a <= b){
            a += arr[i];
        }

        else if(b<a){
            b += arr[i];
        }

        i--;
    }

    if(a==b){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
}






#include<bits/stdc++.h>

using namespace std;


int smallestSub(int arr[], int n, int x) 
{ 
    
    int curr_sum = 0, min_len = n+1; 
  
  
    int start = 0, end = 0; 
    while (end < n) 
    { 
        while (curr_sum <= x && end < n) 
            curr_sum += arr[end++]; 
  
      
        while (curr_sum > x && start < n) 
        { 
            
            if (end - start < min_len) 
                min_len = end - start; 
  
        
            curr_sum -= arr[start++]; 
        } 
    } 
    return min_len; 
}


int main(){
    int n,k;

    cin >> n >> k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << smallestSub(arr,n,k) << endl;
}