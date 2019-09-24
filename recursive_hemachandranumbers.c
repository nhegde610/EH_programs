#include<stdio.h>
int hemachandranumbers(int n){
	if (n == 0)
		return 0;	
	else if (n == 1)
		return 1;
	else 
		return hemachandranumbers(n-1) + hemachandranumbers(n-2);
}
int main(){
	int i,n;
	printf("Enter the number for hemachandra numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d\t",hemachandranumbers(i));	
	}
	printf("\n");
	return 0;	
}
