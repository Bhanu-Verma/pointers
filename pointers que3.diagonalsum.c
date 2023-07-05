#include <stdio.h>

int main(){
	int n,i,j;
	printf("give the innput of the size of matrix");
	scanf("%d",&n);
	int arr[n][n];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
			
		}
	}
	
	int *ptr=&arr[0][0];
	int sum=*ptr;
	for( i=1; i<=n-1; i++){
		
		ptr+=(n+1);
		sum+=*(ptr);
	}
	
	printf("%d\n",sum);

	return 0;
}
