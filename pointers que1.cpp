#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int *ptr=&arr[0],sum=0;
	for(int i=0; i<n; i++){
		sum = sum+(*ptr);
		ptr++;
	}
	
	cout<<sum<<endl;
	return 0;
}
