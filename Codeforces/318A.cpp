#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	long long odd = 1;
	long long even = 2;
   	
   	if(n%2 == 1){
   		if(k>((n/2) +1)){
   			long long temp = k - (n/2) -2;

   			while(temp > 0){
   				even += 2;
   				temp --;
   			}
   			cout << even << endl;
   		}

   		else{
   			long long temp = k-1;
   			while(temp > 0){
   				odd += 2;
   				temp --;
   			}
   			cout << odd << endl;
   		}
   	}
   	else{
   		if(k>(n/2)){
   			long long temp = k - (n/2) -1;

   			while(temp > 0){
   				even += 2;
   				temp --;
   			}
   			cout << even << endl;
   		}

   		else{
   			long long temp = k-1;
   			while(temp > 0){
   				odd += 2;
   				temp --;
   			}
   			cout << odd << endl;
   		}
   	}
}