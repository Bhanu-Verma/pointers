#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void modify(int arr[],int n){
	for(int i=0; i<n; i++){
		arr[i]*=3;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	modify(arr,n);
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
