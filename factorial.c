#include<stdio.h>
int main(){
	int a, b=1, n;
	printf("Enter number: \n");
	scanf("%d", &n);
	for (a=1;a<=n;a++)
		b*=a;
	printf("The factorial of %d is %d\n", n, b);
}
