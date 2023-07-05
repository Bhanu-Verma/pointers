#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int *a, int *b){
//	cout<<*a<<" "<<*b<<endl;
		while(*a%*b!=0){
			int r=*a%*b;
			*a=*b;
			*b=r;
		}
		
		return *b;
	
}

int main(){
	int a,b;
	cin>>a>>b;
	//cout<<a<<" "<<b<<endl;
	if(a<b){
		int t;
		t=a;
		a=b;
		b=t;
		
	}
//	b=(a>b)? b:a;
//	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	int *ptr1=&a, *ptr2=&b;
	int ans=gcd(ptr1, ptr2);
	cout<<ans;
	
	
	return 0;
}
