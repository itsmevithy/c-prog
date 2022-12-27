#include<stdio.h>
int main(){
	int a, b=0, n, i;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("Enter number: ");
		scanf("%d", &a);
		b+=a;
		a=0;
	}
	printf("The sum is %d", b);
}
