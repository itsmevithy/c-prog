#include<stdio.h>
int main(){
	int a=1, n, i, b=1, temp;
	printf("Enter number: \n");
	scanf("%d", &n);
	printf("%d, %d, ", a, b);
	for(i=0;i<n;i++){
		b+=a;
		printf("%d, ", b);
		temp=b;
		b=a;
		a=temp;
	}
}
