#include <stdio.h>

int main(){
	int arr[4]={1,2,3,4};
	int *ptr=&arr[0],i;
	int size=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	
	
	for(i=0; i<size; i++){
		sum+=*ptr;
		ptr++;
	}
	printf("sum=%d",sum);
	return 0;
}
