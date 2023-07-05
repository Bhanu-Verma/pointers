#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void shift(int *ptr1, int *ptr2, int *ptr3){
		int t;
		t=*ptr1;
		*ptr1=*ptr2;
		*ptr2=*ptr3;
		*ptr3=t;
		
		
		
}

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	
	int *ptr1, *ptr2, *ptr3;
	ptr1=&x;
	ptr2=&y;
	ptr3=&z;
	shift(ptr1,ptr2,ptr3);
	
	printf("x=%d y=%d z=%d",x,y,z);
	return 0;
}
