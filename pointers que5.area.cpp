#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float area(float *a, float *b, float *c){
			float s;
			s=(*a+*b+*c)/2;
			
			float ans=sqrt(s*(s-*a)*(s-*b)*(s-*c));
			return ans;
	
}
int main(){
	float a, b, c;
	cin>>a>>b>>c;
	
	float ar=area(&a, &b, &c);
	cout<<ar;
	
	return 0;
}
