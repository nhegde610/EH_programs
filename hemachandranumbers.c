#include<stdio.h>
int main(){
	int n,f1,f2,f3;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i==0){
			f1 = i;
			printf("%d\t",f1);		
		}
		else if (i==1){
			f2 = i;		
			printf("%d\t",f2);
		}
		else {
			f3 = f2 + f1;
			printf("%d\t",f3);
			f1 = f2;
			f2 = f3;
		}
	}
	printf("\n");
	return 0;
}
